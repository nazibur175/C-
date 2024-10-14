#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5;
int v[N];
struct Stree
{
   #define lf (root<<1)
   #define rt ((root<<1)|1)
    int t[4*N];
    static const int inf = -1e9;
    Stree(){}

    void build(int root, int lo ,int hi){
        if(lo==hi){
            t[root]=v[lo];
            return;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        t[root]= max(t[lf],t[rt]);
    }

    void update(int root,int lo,int hi, int i, int x){
        if(lo>i || hi<i) return;
        if(lo==hi && lo==i){
            t[root]=x;
            return;
        }
        int mid= (lo+hi)>>1;
        update(lf,lo,mid,i,x);
        update(rt,mid+1,hi,i,x);
        t[root]=max(t[lf],t[rt]);
    }

    int query(int root,int lo, int hi,int i,int j){
        if(lo>j || hi<i)
        return inf;
        if(lo>=i && hi<=j)
        return t[root];
        int mid=(lo+hi)>>1;
        int L=query(lf,lo,mid,i,j);
        int R=query(rt,mid+1,hi,i,j);
        return max(L,R);
    }
};

void solve(){


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}