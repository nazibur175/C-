#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int up = powl((1+sqrtl(5)),n)-powl((1-sqrtl(5)),n);
    int dow = pow(2,n)*sqrtl(5);
    cout<<up/dow<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}