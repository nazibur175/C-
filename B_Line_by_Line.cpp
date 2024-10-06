#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        long double n,p;
        cin>>n>>p;
        // (p/100)^(n-1)= (pp/100)^n
        long double temp = (p/100.0);
        temp = powl(temp,n-1);
        // pp = (temp)^(1/n) * 100;
        long double pp = powl(temp,(1.0/n))*100.0;
        cout<<"Case #"<<tt<<": ";
        cout<<setprecision(15)<<fixed;
        cout<<pp-p<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
//freopen("meta.in", "r", stdin);
//freopen("meta.out", "w", stdout);
solve();

}