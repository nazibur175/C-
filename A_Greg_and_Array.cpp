#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<pair<int,int>>v;
    int val[m];
    for(int i=0;i<m;i++){
        int x,y,d;
        cin>>x>>y>>d;
        v.push_back({x,y});
        val[i]=d;
    }

    int operation[m+4]={0};
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        operation[x]++;
        operation[y+1]--;
    }
    for(int i=1;i<=m;i++){
        operation[i]+=operation[i-1];
    }
    int diff[n+2]={0};
    for(int i=1;i<=m;i++){
        int in=i-1;
        int l=v[in].first;
        int r=v[in].second;
        int temp_val=val[in];
        int times=operation[i];
        diff[l]+=temp_val*times;
        diff[r+1]-=temp_val*times;
    }
    for(int i=1;i<=n;i++){
        diff[i]+=diff[i-1];
    }
    for(int i=1;i<=n;i++){
        a[i]+=diff[i];
        cout<<a[i]<<" ";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}