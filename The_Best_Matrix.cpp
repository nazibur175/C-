#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int ans=n*m;
        for(int i=-1;i<=1;i++){
            if(i==0) continue;
            for(int j=-1;j<=1;j++){
                if(j==0) continue;
                map<int,int>mp;
                for(int x=0;x<n;x++){
                    for(int y=0;y<m;y++){
                        // a[x][y] = a0 + i*x + j*y;
                        int a0 = a[x][y] - i*x - j*y;
                        mp[a0]++;
                    }
                }
                int cnt = 0;
                for(auto it:mp){
                    cnt = max(cnt,it.second);
                }
                int temp=n*m - cnt;
                ans = min(ans,temp);
            }
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