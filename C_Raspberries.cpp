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
        int ans=INT64_MAX;
        if(k==2 || k==3|| k==5){
            for(int i=0;i<n;i++){
                if(a[i]%k==0){
                    ans=0;
                    break;
                }
                else {
                    ans = min(ans,k-(a[i]%k));
                }
            }
        }
        else {
            if(n==1){
                if(a[0]%k==0) ans=0;
                else ans= k-a[0]%k;
            }
            else {
                int ce=0;
                int single=INT64_MAX;
                for(int i=0;i<n;i++){
                    if(a[i]%k==0){
                        ans=0;
                        ce=2;
                        break;
                    }
                    else if(a[i]%2==0) ce++;
                    single=min(single,k-a[i]%k);
                }
                ans=min(single,max(1LL*0,2-ce));
            }
        }
    cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}