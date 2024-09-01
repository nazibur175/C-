#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v;
        int mi=INT64_MAX;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            int a[m];
            for(int j=0;j<m;j++){
                cin>>a[j];
            }
            sort(a,a+m);
            mi=min(mi,a[0]);
            if(m>=2){
                v.push_back(a[1]);
            }
            else v.push_back(a[0]);
        }
        int ans=mi;
        sort(v.begin(),v.end());
         for(int i=v.size()-1;i>=1;i--){
             ans+=v[i];
         }
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}