#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        int ans=0;
        for(auto i:s){
            int need=k-i;
            if(need==i){
                ans+=mp[i]/2;
                mp[i]=0;
                continue;
            }
            ans+= min(mp[i],mp[need]);
            mp[need]=0;
            mp[i]=0;
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