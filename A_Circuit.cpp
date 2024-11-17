#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[2*n];
        int one=0;
        int zero=0;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]==1)one++;
            else zero++;
        }
        int on=min(one,n);
        if(one>n) on -= (one-n);
        int off= zero/2 + one/2;
        cout<<n-off<<" "<<on<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}