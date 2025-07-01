#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[i%4]++;
        }
        if (mp[0]!=mp[3]||mp[1]!=mp[2]) {
            cout<<"Alice\n";
        } 
        else{
            cout<<"Bob\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}