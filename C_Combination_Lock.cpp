#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n%2==0) cout<<-1<<endl;
        else {
            for(int i=1;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
