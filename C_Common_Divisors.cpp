#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int gc(int x,int y){
    if(y==0) return x;
    return gc(y,x%y);
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int gcd=0;
    for(int i=0;i<n;i++){
        gcd=gc(gcd,a[i]);
    }

    int ans=0;
    for(int i=1;i*i<=gcd;i++){
        if(gcd%i==0){
            ans++;
            if(gcd/i!=i) ans++;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}