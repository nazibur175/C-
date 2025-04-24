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
        int b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            ans+=max(a[i],b[i]);
            v.push_back(min(a[i],b[i]));
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k;i++){
            if(i==k-1){
                ans++;
                break;
            }
            ans+=v[i];
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