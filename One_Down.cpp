#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        int f=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==ss[i]) continue;
            if(s[i]=='0' && ss[i]=='1'){
                f=1;
                break;
            }
            cnt++;
        }
        if(f==0 && cnt%2==0){
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}