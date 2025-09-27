#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                cnt++;
            }
            else cnt--;
            ans=max(ans,cnt);
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