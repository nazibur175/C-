#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    indexed_set s;
    for(int i=0;i<k;i++){
        s.insert({a[i],i});
    }

    int in=(k-1)/2;
    int ans=(*s.find_by_order(in)).first;
    
    cout<<ans<<" ";
    for(int i=1;(i+k-1)<n;i++){
        s.erase(s.lower_bound({a[i-1],0}));
        s.insert({a[i+k-1],i+k-1});
        ans=(*s.find_by_order(in)).first;
        cout<<ans<<" ";
    }
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}