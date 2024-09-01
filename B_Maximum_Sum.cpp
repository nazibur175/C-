#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int mo(int n){
    if(n<0)
    return ((n % mod) + mod) % mod;
    else return n%mod;
}
void solve(){
    
test{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cursum=0;
    int ans = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        cursum=max(1LL*0,cursum+a[i]);
        ans = max(ans,cursum);
        sum+=a[i];
    }

    int anss=ans;
    for(int i=1;i<=k;i++){
        anss=(anss%mod+anss%mod)%mod;
    }
    if(ans==sum){
        cout<<anss<<endl;
    }
    else {
        
        cout<< mo(mo(mo(sum)-mo(ans))+mo(anss))<<endl;
    }
}
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}