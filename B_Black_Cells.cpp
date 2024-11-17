#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf=2e18;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        if(n%2==0 || n==1){
            int ans=1;
            for(int i=0;i<n-1;i+=2){
                ans=max(ans, a[i+1]-a[i]);
            }
            cout<<ans<<endl;
        }

        else {
            //int ans=1;
            int pre[n+5]={0};
            for(int i=0;i<n-1;i++){
                if(i==0){
                    pre[i]=a[i+1]-a[i];
                }
                else{
                    pre[i]=max(pre[i-2],a[i+1]-a[i]);
                }
                //cout<<i<<" "<<pre[i]<<" ";
                i++;
            }
            //cout<<endl;
            int post[n+5]={0};
            for(int i=n-1;i>=1;i--){
                if(i==n-1) post[i]=a[i]-a[i-1];
                else {
                    post[i]=max(post[i+2],a[i]-a[i-1]);
                }
                //cout<<i<<" "<<post[i]<<" ";
                i--;
            }
            int ans=inf;
            for(int i=0;i<n;i+=2){
                if(i==0){
                    ans=min(ans,post[i+2]);
                    //cout<<ans<<endl;
                }
                else {
                    ans=min(ans, max(pre[i-2],post[i+2]));
                    //cout<<ans<<endl;
                }
            }
            if(ans==inf) ans=1;
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