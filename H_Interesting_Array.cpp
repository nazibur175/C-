#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+1;
const int inf=1e10;
int arr[N];
int lazy[4*N];
int tree[4*N];
struct  Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    int op=0;
    // 1- or
    // 2- and
    Seg_tree(int temp){
        memset(tree, 0, sizeof(tree));
        op=temp;
    }
    inline void push(int root, int lo,int hi){
        if(lazy[root]==0){
            return ;
        }
        tree[root]=tree[root]|lazy[root];
        if(lo!=hi){
            lazy[lf]=lazy[lf]|lazy[root];
            lazy[rt]=lazy[rt]|lazy[root];
        }
        lazy[root]= 0;
    }
    inline int milao(int x,int y){
        if(op==1) return x|y;
        else return x&y;
    }
    inline void prop(int root){
        if(op==1) tree[root]=tree[lf]|tree[rt];
        else tree[root]=tree[lf]&tree[rt];
    }
    void build(int root,int lo,int hi){
        lazy[root]=0;
        if(lo==hi){
            tree[root]=arr[lo];
            return ;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }
    void update(int root,int lo,int hi,int i,int j,int val){
        push(root,lo,hi);
        if(j<lo || hi<i) return;

        if(i<=lo && hi<=j){
            lazy[root]=val;
            push(root,lo,hi);
            return;
        }
        int mid = (lo+hi)>>1;
        update(lf,lo,mid,i,j,val);
        update(rt,mid+1,hi,i,j,val);
        prop(root);
    }

    int query(int root,int lo,int hi,int i, int j){
        if(op==1)
        push(root,lo,hi);
        if(i>hi || lo>j){
            if(op==1) return 0;
            else return ~0ll;
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
    Seg_tree seg(1);
    seg.build(1,1,n);
    vector<tuple<int, int, int>> queries;
    while(q--){
        int l,r,val;
        cin>>l>>r>>val;
        queries.push_back(make_tuple(l, r, val));
        seg.update(1,1,n,l,r,val);
    }
    for(int i=1;i<=n;i++){
        arr[i]=seg.query(1,1,n,i,i);
        //cout<<arr[i]<<" ";
    }
    // cout<<"\n";
    Seg_tree seg2(2);
    seg2.build(1,1,n);
    int f=1;
    for(auto [l,r,val]:queries){
        if(seg2.query(1,1,n,l,r) != val){
            f=0;
            break;
        }
    }
    if(f){
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            cout<<arr[i];
            if(i<n) cout<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}