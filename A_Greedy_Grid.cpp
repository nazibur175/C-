#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n, m;
        cin >> n >> m;
        if(n>=3 && m>=2){
            cout<<"YES\n";
        }
        else if(n>=2 && m>=3){
            cout<<"YES\n";
        }
       
        else cout<<"NO\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}