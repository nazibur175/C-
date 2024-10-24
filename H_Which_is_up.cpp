#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]= ((4*a[i-1])^(i-1))%6;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) cnt++;
    }
    //cout<<endl;
    cout<<cnt<<endl;
        

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}