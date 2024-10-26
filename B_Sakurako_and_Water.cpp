#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            vector<int>v;
            for(int j=0;j<=n;j++){
                int x=1+j;
                int y=i+j;
                if(x>n||y>n){
                    break;
                }
                v.push_back(a[x][y]);
            }
            sort(v.begin(),v.end());
            if(v[0]<0)
            ans+=(v[0]*-1);
        }
        for(int i=2;i<=n;i++){
            vector<int>v;
            for(int j=0;j<=n;j++){
                int x=i+j;
                int y=1+j;
                if(x>n||y>n){
                    break;
                }
                v.push_back(a[x][y]);
            }
            sort(v.begin(),v.end());
            if(v[0]<0)
            ans+=(v[0]*-1);
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