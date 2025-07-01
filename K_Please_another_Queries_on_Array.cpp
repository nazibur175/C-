#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int N=4e5+5;
const int NN=300;

int arr[N];
vector<int> primes;
uint64_t factor_mask[NN+5];

void seive(){
    vector<bool> is_prime(NN+1,true);
    for(int i=2;i*i<=NN;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=NN;j+=i){
                is_prime[j]=false;
            }
        }

    }

    for(int i=2;i<=NN;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}

void precompute(){
    seive();
    for(int x=1;x<=NN;x++){
        int v=x;
        uint64_t m=0;
        for(int i=0;i<primes.size();i++){
            if(v%primes[i]==0){
                m|=(1ULL<<i);
                while(v%primes[i]==0)
                    v/=primes[i];
            }
        }
        factor_mask[x]=m;
    }
}

int bigmod(int a,int b){
    int res=1;
    while(b>0){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

struct Node{
    int prod;
    uint64_t mask;
};

Node tree[4*N];
Node lazy[4*N];

struct Seg_tree{
    #define lf (root<<1)
    #define rt ((root<<1)|1)
    Seg_tree(){}
    inline void push(int root,int lo,int hi){

        if(lazy[root].prod==1 && lazy[root].mask==0) 
            return;

        int len=hi-lo+1;
        tree[root].prod=tree[root].prod*bigmod(lazy[root].prod,len)%mod;
        tree[root].mask|=lazy[root].mask;

        if(lo!=hi){
            lazy[lf].prod=lazy[lf].prod*lazy[root].prod%mod;
            lazy[lf].mask|=lazy[root].mask;
            lazy[rt].prod=lazy[rt].prod*lazy[root].prod%mod;
            lazy[rt].mask|=lazy[root].mask;
        }

        lazy[root]={1,0};
    }

    inline void prop(int root){
        tree[root].prod=(tree[lf].prod*tree[rt].prod)%mod;
        tree[root].mask=tree[lf].mask|tree[rt].mask;
    }

    void build(int root,int lo,int hi){
        lazy[root]={1,0};
        if(lo==hi){
            tree[root]={arr[lo],factor_mask[arr[lo]]};
            return;
        }
        int mid=(lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }

    void update(int root,int lo,int hi,int i,int j,int val){
        push(root,lo,hi);
        if(j<lo||hi<i) return;
        if(i<=lo&&hi<=j){
            lazy[root].prod=val;
            lazy[root].mask=factor_mask[val];
            push(root,lo,hi);
            return;
        }
        int mid=(lo+hi)>>1;
        update(lf,lo,mid,i,j,val);
        update(rt,mid+1,hi,i,j,val);
        prop(root);
    }

    Node query(int root,int lo,int hi,int i,int j){
        push(root,lo,hi);
        if(j<lo||hi<i) return {1,0};
        if(i<=lo&&hi<=j) return tree[root];
        int mid=(lo+hi)>>1;
        Node left=query(lf,lo,mid,i,j);
        Node right=query(rt,mid+1,hi,i,j);
        return {left.prod*right.prod%mod,left.mask|right.mask};
    }
};

void solve(){
    precompute();
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>arr[i];

    Seg_tree seg;
    seg.build(1,1,n);

    while(q--){
        string op;
        cin>>op;
        if(op=="MULTIPLY"){
            int l,r,x;
            cin>>l>>r>>x;
            seg.update(1,1,n,l,r,x);
        }else{
            int l,r;
            cin>>l>>r;
            Node res=seg.query(1,1,n,l,r);
            int ans=res.prod;
            for(int i=0;i<primes.size();i++){
                if(res.mask&(1ULL<<i)){
                    ans=ans*(primes[i]-1)%mod;
                    ans=ans*bigmod(primes[i],mod-2)%mod;
                }
            }
            cout<<ans<<"\n";
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
// Template from Rakib Joy