#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lcm(int a,int b){
    int g=__gcd(a,b);
    return (a*b/g);
}
void solve(){
    test{
    int n; 
    cin>>n;
    vector<int> a(n+2,1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> b(n+2,1);
    for(int i=1;i<=n+1;i++){
        b[i]=lcm(a[i],a[i-1]);
    }
    int f=1;
    for(int i=1;i<=n;i++){
        if(__gcd(b[i],b[i+1])!=a[i]){
            cout<<"NO"<<endl;
            f=0;
            break;
        }
    }
    if(f)
    cout<<"YES"<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}