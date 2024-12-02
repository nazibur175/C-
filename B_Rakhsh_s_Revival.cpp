#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int ans=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                cnt=0;
                continue;
            }
            else{
                cnt++;
            }
            if(cnt==m){
                cnt=0;
                ans++;
                for(int j=i;j<min(n,i+k);j++){
                    s[j]='1';
                }
                i+=k-1;
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