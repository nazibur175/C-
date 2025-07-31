#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        map<int, int> mp;
        for(int i=0;i<n;i++) cin>>a[i], mp[a[i]]++;
        int cnt=mp[0];
        for(int i=1;i<=50;i++){
            cnt+=i*mp[i];
        }
        cout<<cnt<<"\n";
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}