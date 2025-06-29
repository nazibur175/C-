#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+1;
const int inf=1e10;
int arr[N];
// int lazy[4*N];
// val - op
pair<int,int> lazy[4*N];
int tree[4*N];
struct  Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    Seg_tree(){}
    inline void push(int root, int lo,int hi){
        if(lazy[root].first==0){
            return ;
        }
        tree[root]=tree[root]*(lazy[root].second)+lazy[root].first*(hi-lo+1);
        if(lo!=hi){
            // lazy[lf]=lazy[lf]+lazy[root];
            // lazy[rt]=lazy[rt]+lazy[root];
            lazy[lf].first = lazy[lf].first * lazy[root].second + lazy[root].first;
            lazy[lf].second = lazy[lf].second * lazy[root].second;
            lazy[rt].first = lazy[rt].first * lazy[root].second + lazy[root].first;
            lazy[rt].second = lazy[rt].second * lazy[root].second;
        }
        lazy[root]={0,1};
    }
    inline int milao(int x,int y){
        return x+y;
    }
    inline void prop(int root){
        tree[root]=tree[lf]+tree[rt];
    }
    void build(int root,int lo,int hi){
        lazy[root]={0,1};
        if(lo==hi){
            tree[root]=arr[lo];
            return ;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }
    void update(int root,int lo,int hi,int i,int j,int val,int op){
        push(root,lo,hi);
        if(j<lo || hi<i) return;

        if(i<=lo && hi<=j){
            lazy[root]={val,op}; 
            push(root,lo,hi);
            return;
        }
        int mid = (lo+hi)>>1;
        update(lf,lo,mid,i,j,val,op);
        update(rt,mid+1,hi,i,j,val,op);
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
        int type;
        cin>>type;
        if(type==1){
            int l,r,val;
            cin>>l>>r>>val;
            seg.update(1,1,n,l,r,val,1);
        }
        else if(type==2){
            int l,r,val;
            cin>>l>>r>>val;
            seg.update(1,1,n,l,r,val,0);
        }
        else{
            int l,r;
            cin>>l>>r;
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