#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
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
        indexed_set s;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            int x= s.order_of_key(v[i].second);
            ans+=x;
            s.insert(v[i].second);
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