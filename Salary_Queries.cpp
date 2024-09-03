#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long 
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
// template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
#define   mod             100000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    cin>>n>>q;
    int a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    indexed_set s;
    for(int i=1;i<=n;i++){
        s.insert({a[i],i});
    }
    while (q--)
    {
        char ch;
        int x,y;
        cin>>ch>>x>>y;
        if(ch=='!'){
            s.erase({a[x],x});
            a[x]=y;
            s.insert({y,x});
        }
        else {
            int ans = s.order_of_key({y,mod}) - s.order_of_key({x-1,mod}) ;
            cout<<ans<<endl;
        }
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}