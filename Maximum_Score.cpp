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
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a,a+n);
            int i=0;
            int j=n-1;
            int ans=0;
            while (i<j)
            {
                ans+=abs(a[i]-a[j]);
                i++;
                j--;
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