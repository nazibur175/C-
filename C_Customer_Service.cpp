#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(a[i][j]==1){
                    cnt++;
                }
                else break;
            }
            v.push_back(cnt);
        }
        sort(v.begin(),v.end());
        //for(auto x:v) cout<<x<<" ";
        //cout<<endl;
        int in=0;
        int ans=0;
        for(int i=1;i<n;i++){
            while (in<v.size() && v[in]<i)
            {
                in++;
            }
            if(in<n && v[in]>=i){
                ans=i;
                in++;
            }
        }
        cout<<ans+1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}