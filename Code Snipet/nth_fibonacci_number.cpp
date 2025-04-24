// f(0) = 0;
// f(1) = 1;
// f(2) = 1;

#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// using Binet's formula we can calculate nth fibonacci number
void solve(){
    int n;
    cin>>n;
    int lob = powl((1+sqrtl(5)),n)-powl((1-sqrtl(5)),n);
    int hor = pow(2,n)*sqrtl(5);
    cout<<lob/hor<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}