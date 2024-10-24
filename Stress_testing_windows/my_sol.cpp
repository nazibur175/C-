#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());

        multiset<int> m;
        int ans=0;
        for (int i=0; i<n; i++){
            while (!m.empty() && *m.begin()< v[i].first) {
                m.erase(m.begin());
            }
        m.insert(v[i].second);
        ans=max(ans,(int)m.size());
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