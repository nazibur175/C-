#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int leftset(int n){
    return __builtin_ctz(n);
}
void solve(){
    test{
        int n;
        cin>>n;
        int b=n&(n-1);
        int a=(1<<(leftset(n)));
        if(n==2) cout<<"-1"<<endl;
        else 
        cout<<a<<" "<<b<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}