#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int f=1;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(abs(a[i]-a[j])%k==0){
                    f=0;
                    break;
                }
            }
            if(f){
                ans=i+1;
            }
        }
        if(ans==0)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}