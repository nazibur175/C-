#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>m;
        orderded_set<pair<int,int>>st;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            cout<<st.size()-st.order_of_key({x,1})<<endl;
            st.insert({x,m[x]});
            //ans+= (st.size()-1-st.order_of_key({x,1}));
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