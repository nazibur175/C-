#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int nn=n;
        int cnt2=0;
        int cnt5=0;
        while (n%2==0 && n)
        {
            cnt2++;
            n/=2;
        }
        while (n%5==0 && n)
        {
            cnt5++;
            n/=5;
        }
        int k=1;
        while (cnt2<cnt5 && k*2<=m)
        {
            k*=2;
            cnt2++;
        }
        while (cnt5<cnt2 && k*5<=m)
        {
            k*=5;
            cnt5++;
        }
        while (k*10<=m)
        {
            k*=10;
        }
        if(k==1) cout<<nn*m<<endl;
        else {
            //10*k<m
            k*=(m/k);
            cout<<nn*k<<endl;
        }
        
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}