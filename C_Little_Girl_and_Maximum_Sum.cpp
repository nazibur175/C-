#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        int dif[n+9]={0};
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            dif[l]++;
            dif[r+1]--;
        }
        int cnt=0;
        vector<int>v;
        for(int i=1;i<=n;i++){
            cnt+=dif[i];
            v.push_back(cnt);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=v[i]*a[i];
        }
        cout<<ans<<endl;
        
    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}