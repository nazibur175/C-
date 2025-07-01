#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>prefix(n),suffix(n);
        prefix[0]=v[0];
        suffix[n-1]=v[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=min(prefix[i-1],v[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],v[i]);
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(prefix[i]==v[i] || suffix[i]==v[i]){
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}