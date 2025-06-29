#include<bits/stdc++.h>
using namespace std;
// #define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6+5;
const int inf=1e10;
// int arr[N];
// int lazy[4*N];
string s;
// int tree[4*N];
// (,)
pair<int,int> tree[4*N];
struct  Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    Seg_tree(){}
    // inline void push(int root, int lo,int hi){
    //     if(lazy[root]==0){
    //         return ;
    //     }
    //     tree[root]=tree[root]+lazy[root]*(hi-lo+1);
    //     if(lo!=hi){
    //         lazy[lf]=lazy[lf]+lazy[root];
    //         lazy[rt]=lazy[rt]+lazy[root];
    //     }
    //     lazy[root]= 0;
    // }
    inline pair<int,int> milao(pair<int,int>x, pair<int,int>y){
        // return x+y;
        pair<int,int> ans;
        ans.first = x.first + y.first - min(x.first,y.second);
        ans.second = x.second + y.second - min(x.first,y.second);
        return ans;
    }
    inline void prop(int root){
        
        //tree[root]=tree[lf]+tree[rt];
        tree[root].first = tree[lf].first + tree[rt].first - min(tree[lf].first,tree[rt].second);
        tree[root].second = tree[lf].second + tree[rt].second - min(tree[lf].first,tree[rt].second);

    }
    void build(int root,int lo,int hi){
        if(lo==hi){
            if(s[lo]=='('){
                tree[root]={1,0}; 
            }
            else{
                tree[root]={0,1};
            }
            return ;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }
    // void update(int root,int lo,int hi,int i,int j,int val){
    //     //push(root,lo,hi);
    //     if(j<lo || hi<i) return;

    //     if(i<=lo && hi<=j){
    //         lazy[root]=val;
    //         //push(root,lo,hi);
    //         return;
    //     }
    //     int mid = (lo+hi)>>1;
    //     update(lf,lo,mid,i,j,val);
    //     update(rt,mid+1,hi,i,j,val);
    //     prop(root);
    // }

    pair<int,int> query(int root,int lo,int hi,int i, int j){
        //push(root,lo,hi);
        if(i>hi || lo>j){
            return {0,0};
        }
        if(i<=lo && hi<=j){
            return tree[root];
        }
        int mid= (lo+hi)>>1;
        return milao(query(lf,lo,mid,i,j),query(rt,mid+1,hi,i,j));
        
    }

};

void solve(){
   cin>>s;
   int n = s.size();
   Seg_tree seg;
   seg.build(1,0,n-1);
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--; r--;
        pair<int,int> ans = seg.query(1,0,n-1,l,r);
        cout<<r-l+1-(ans.first + ans.second)<<"\n";
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}