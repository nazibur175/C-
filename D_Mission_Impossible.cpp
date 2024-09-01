#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int f=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j==n) {
                f=1;
                break;
            }
        }
    }
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}