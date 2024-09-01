#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             2019
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int suf=0;
    int power_of_ten=1;
    int ans =0;
    vector<int>cnt_suf(mod);
    cnt_suf[suf]++;
    for(int i=n-1;i>=0;i--){
        int digit=s[i]-'0';
        suf=(suf+digit*power_of_ten)%mod ;
        power_of_ten=10*power_of_ten%mod;
        ans+=cnt_suf[suf];
        cnt_suf[suf]++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}