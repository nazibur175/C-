#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=-1;
        int r=-1;
        int ll=-1;
        int rr=-1;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                l=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                r=i;
                //break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                ll=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                rr=i;
                //break;
            }
        }
        int ans=0;
        ans=min(ll+(n-rr-1), l+(n-r-1));
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}