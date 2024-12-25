#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        int x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        int ans=0;
        int l=sum-y;
        int r=sum-x;
        for (int i=0;i<n;i++) {
            int L=l-a[i];
            int R=r-a[i];
            auto low =lower_bound(a.begin()+i+1,a.end(),L);
            auto high =upper_bound(a.begin()+i+1,a.end(),R);
            ans +=(high-low);
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