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
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        vector<int>temp;
        for(auto x:s) temp.push_back(x);
        int ans=1;
        for(int i=0;i<temp.size();i++){
            int val = temp[i]+n-1;
            int cnt=upper_bound(temp.begin(),temp.end(),val)-temp.begin();
            cnt-=i;
            ans = max(ans,cnt);
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