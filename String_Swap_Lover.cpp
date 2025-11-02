#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+1;
const int inf=1e10;
struct Node{
  int cnt0;
  int cnt1;
  int inv;
  Node(){
    cnt0=cnt1=inv=0;
  }
};
string s;
int arr[N];
int lazy[4*N];
Node tree[4*N];
struct  Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    Seg_tree(){}
    inline void push(int root, int lo,int hi){
        if(lazy[root]==0){
            return ;
        }
        swap(tree[root].cnt0,tree[root].cnt1);
        tree[root].inv=(tree[root].cnt0*tree[root].cnt1)-tree[root].inv;

        if(lo!=hi){
            lazy[lf]^=1;
            lazy[rt]^=1;
        }
        lazy[root]= 0;
    }
    inline Node milao(Node x,Node y){
        Node res;
        res.cnt0=x.cnt0+y.cnt0;
        res.cnt1=x.cnt1+y.cnt1;
        res.inv=x.inv+y.inv+(x.cnt0*y.cnt1);
        return res;
    }
    inline void prop(int root){
        //tree[root]=tree[lf]+tree[rt];
        tree[root].cnt0=tree[lf].cnt0+tree[rt].cnt0;
        tree[root].cnt1=tree[lf].cnt1+tree[rt].cnt1;
        tree[root].inv=tree[lf].inv+tree[rt].inv+(tree[lf].cnt0*tree[rt].cnt1);
    }
    void build(int root,int lo,int hi){
        lazy[root]=0;
        if(lo==hi){
            //tree[root]=arr[lo];
            if(arr[lo]==0){
                tree[root].cnt0=1;
                tree[root].cnt1=0;
            }
            else{
                tree[root].cnt0=0;
                tree[root].cnt1=1;
            }
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
            lazy[root]^=1;
            push(root,lo,hi);
            return;
        }
        int mid = (lo+hi)>>1;
        update(lf,lo,mid,i,j);
        update(rt,mid+1,hi,i,j);
        prop(root);
    }
    
    Node query(int root,int lo,int hi,int i, int j){
        push(root,lo,hi);
        if(i>hi || lo>j){
            return Node();
        }
        if(i<=lo && hi<=j){
            return tree[root];
        }
        int mid= (lo+hi)>>1;
        return milao(query(lf,lo,mid,i,j),query(rt,mid+1,hi,i,j));
        
    }

};

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        arr[i+1]=s[i]-'0';
    }
    Seg_tree seg;
    seg.build(1,1,n);
    int q;
    cin>>q;
    while(q--){
      int l,r;
      cin>>l>>r;
      seg.update(1,1,n,l,r);
      cout<<seg.query(1,1,n,1,n).inv<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
// Snippet from Rakib Joy COU