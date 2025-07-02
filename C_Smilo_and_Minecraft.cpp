#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        char a[n][m];
        int total_g=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='g') total_g++;
            }
        }
        int presum[n+1][m+1];
        memset(presum, 0, sizeof(presum));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                presum[i+1][j+1] = presum[i][j+1] + presum[i+1][j] - presum[i][j] + (a[i][j]=='g');
            }
        }
        int cnt=INT64_MAX;
        k--;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='.'){
                    int x1=max(0LL,i-k), y1=max(0LL,j-k);
                    int x2=min(n-1,i+k), y2=min(m-1,j+k);
                    int c=presum[x2+1][y2+1] - presum[x1][y2+1] - presum[x2+1][y1] + presum[x1][y1];
                    cnt=min(cnt,c);
                }
            }
        }
        // cout<<cnt<<endl;
        cout<<total_g-cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}