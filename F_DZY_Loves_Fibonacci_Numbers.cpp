#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000009
#define test int t; cin>>t; while(t--)
const int N=3e5+9;
const int inf=1e10;
struct Node{
    int x,y;
    Node(){
        x=0;
        y=0;
    }
};
int arr[N];
Node lazy[4*N];
int tree[4*N];
int f[N];
struct  Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    Seg_tree() {
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < N; i++) {
            f[i] = (f[i - 1] + f[i - 2]) % mod;
        }
    }
    int get_kth(int a,int b,int k){
        a%=mod;
        b%=mod;
        if(k==1) return a;
        if(k==2) return b;
        return ((a*f[k-2])%mod+(b*f[k-1])%mod)%mod;
    }

    int fibo_sum(int a, int b, int n){
    return ((get_kth(a,b,n+2) - get_kth(a,b,2)) % mod + mod ) % mod;
    }


    inline void push(int root, int lo,int hi){
        if(lazy[root].x==0 && lazy[root].y==0){
            return ;
        }
        int len=(hi-lo)+1;
        tree[root]=(tree[root]+fibo_sum(lazy[root].x,lazy[root].y,hi-lo+1))%mod;
        if(lo!=hi){
            int mid=(lo+hi)>>1;
            int l_len=(mid-lo)+1;
            lazy[lf].x+=lazy[root].x;
            lazy[lf].y+=lazy[root].y;
            lazy[rt].x+=get_kth(lazy[root].x,lazy[root].y,l_len+1);
            lazy[rt].y+=get_kth(lazy[root].x,lazy[root].y,l_len+2);
            lazy[lf].x%=mod;
            lazy[lf].y%=mod;
            lazy[rt].x%=mod;
            lazy[rt].y%=mod;
        }
        lazy[root].x=0;
        lazy[root].y=0;
    }
    inline int milao(int x,int y){
        return (x+y)%mod;
    }
    inline void prop(int root){
        tree[root]=(tree[lf]+tree[rt])%mod;
    }
    void build(int root,int lo,int hi){
        lazy[root].x=0;
        lazy[root].y=0;
        if(lo==hi){
            tree[root]=arr[lo];
            return ;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }
    void update(int root,int lo,int hi,int i,int j){
        push(root,lo,hi);
        if(j<lo || hi<i) return;

        if(i<=lo && hi<=j){
            lazy[root].x+= get_kth(1,1,lo-i+1);
            lazy[root].y+= get_kth(1,1,lo-i+2);
            push(root,lo,hi);
            return;
        }
        int mid = (lo+hi)>>1;
        update(lf,lo,mid,i,j);
        update(rt,mid+1,hi,i,j);
        prop(root);
    }

    int query(int root,int lo,int hi,int i, int j){
        push(root,lo,hi);
        if(i>hi || lo>j){
            return 0;
        }
        if(i<=lo && hi<=j){
            return tree[root];
        }
        int mid= (lo+hi)>>1;
        return milao(query(lf,lo,mid,i,j),query(rt,mid+1,hi,i,j));
        
    }

};

void solve(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    Seg_tree seg;
    seg.build(1,1,n);
    while (q--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            seg.update(1,1,n,l,r);
        }
        else {
            cout<<seg.query(1,1,n,l,r)<<"\n";
        }
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}