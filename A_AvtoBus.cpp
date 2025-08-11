#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n%2 || n<=2){
            cout<<-1<<"\n";
            continue;
        }
        n/=2;
        cout<<(n+3-1)/3<<" "<<n/2<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}