#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, auto &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
                
            else
               divisor.push_back(i);
        }
    }
}
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        if(n==1 || m==1) cout<<"YES"<<endl;
        else {
            // int f=1;
            vector<int>v;
            divisors(n,v);
            sort(v.begin(),v.end());
            if(v[1]>=2 && v[1]<=m)
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}