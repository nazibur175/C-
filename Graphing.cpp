#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
void solve(){
    test{
        int n;
        cin>>n;
        char arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]=='1'){
                    m[j+1]++;
                }
            }
        }
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            v.push_back({m[i],i});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            cout<<v[i].second;
            if(i!=n-1) cout<<" ";
            else cout<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}