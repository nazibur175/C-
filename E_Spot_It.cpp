#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
int32_t main()
{
    test{
        int n; cin>>n; int sq=sqrt(n);
        if((sq*(sq+1))+1==n && n>1) cout<<n<<endl;
        else cout<<n+1<<endl;
    }
}