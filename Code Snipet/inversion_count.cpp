#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
#define int long long 
#define   mod   1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        indexed_set st;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            ans+=st.order_of_key(a[i]);
            st.insert(a[i]);
        }
        cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}