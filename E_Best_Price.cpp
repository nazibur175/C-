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
        for(int i=0;i<n;i++)cin>>a[i];
        int b[n];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int ans=0;
        set<int>aa;
        for(int i=0;i<n;i++)aa.insert(a[i]),aa.insert(b[i]);

        for(auto temp:aa){
            //int temp = aa[i];
            // search number of elements less than or equal to a[i];
            int start = lower_bound(a,a+n,temp)-a;
            // search number of elements less than a[i];
            int start2 = lower_bound(b,b+n,temp)-b;
            int neg_rev= start-start2;
            if(neg_rev<=k){
                ans=max(ans, (n-start2)*temp);
            }
            //cout<<start<<" "<<start2<<endl;
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