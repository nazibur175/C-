#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string convert_base9(int n){
    string ans="";
    if(n==0) return ans;
    while (n)
    {
        int dig= n%9;
        ans+=to_string(dig);
        n/=9;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
void solve(){
    test{
        int n;
        cin>>n;
        string ans= convert_base9(n);
        for(int i=0;i<ans.size();i++){
            if(ans[i]-'0'>3) ans[i]++;
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