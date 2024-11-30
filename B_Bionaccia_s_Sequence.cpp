#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e7+5;
int a[N+1];
void solve(){
    a[0]=1;
    a[1]=2;
    a[2]=3;
    for(int i=3;i<N;i++){
       a[i]=(3*a[i-1]+2*a[i-2]+a[i-3]+3)%mod;
    }
    set<int>s;
    for(int i=1;i<=100;i++){
        cout<<a[i]<<endl;
        // cout<<"= ";
        // cout<<a[i]-a[i-1]<<endl;
        //s.insert(a[i]);
    }
    //cout<<s.size()<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}