#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>edges[100009];
int n,k;
int cnt=0;
int dfs(int node,int parent,int mid){
    int sz=1;
    for(auto it:edges[node]){
        if(it!=parent){
            sz+=dfs(it,node,mid);
        }
    }
    if(sz>=mid){
        sz=0;
        cnt++;
    }
    return sz;
}
void solve(){
    test{
        cin>>n>>k;
        for(int i=0;i<=n+9;i++) edges[i].clear();
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        int l=0;
        int r=n;
        while (l<=r)
        {
            int mid=(l+r)/2;
            cnt=0;
            dfs(1,1,mid);
            if(cnt>k){
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<l-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}