#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    if(n%2) cout<<"impossible'\n";
    else {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(i%2==0) ans.push_back(i-1);
            else ans.push_back(i+1);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
            if(i!=n-1) cout<<" ";
            else cout<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}