#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    while (n)
    {
        cout<<n<<" ";
        if(n==1) break;
        if(n%2==0) n=n/2;
        else n= n*3 + 1;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}