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
        map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[0]>=3 && mp[1]>=1 && mp[3]>=1 && mp[5]>=1 && mp[2]>=2){
                ans=i+1;
                break;
            }
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