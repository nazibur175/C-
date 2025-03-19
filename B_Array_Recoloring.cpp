#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k==1){
            int ans1=a[0];
            int mx=0;
            for(int i=1;i<n;i++){
                mx=max(mx,a[i]);
            }
            ans1+=mx;
            int ans2=a[n-1];
            mx=0;
            for(int i=0;i<n-1;i++){
                mx=max(mx,a[i]);
            }
            ans2+=mx;
            cout<<max(ans1,ans2)<<endl;
            continue;
        }
        sort(a.rbegin(),a.rend());
        int ans=0;
        for(int i=0;i<k+1;i++){
            ans+=a[i];
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