#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        int ans=0;
        cin>>s;
        int temp=0;
        for(int i=0;i<n;){
            if(s[i]=='1'){
                temp=i+k+1;
                i++;
            }
            else if(temp<=i){
                i++;
                ans++;
            }
            else i++;
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}