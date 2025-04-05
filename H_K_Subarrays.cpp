#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i]; 
        int gc=0;
        for(int i=1;i<=n;i++){
            gc=__gcd(gc,a[i]);
        }
        int cnt=0;
        int temp=0;
        for(int i=1;i<=n;i++){
            temp=__gcd(temp,a[i]);
            if(temp==gc){
                cnt++;
                temp=0;
            }
        }
        if(cnt>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}