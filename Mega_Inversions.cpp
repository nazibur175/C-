#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;


#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int b[n];
    int c[n];
    indexed_set s;
    indexed_set ss;
    for(int i=0;i<n;i++){
        b[i]=s.size() - s.order_of_key({a[i],i});
        s.insert({a[i],i});

    }
    //for(int i=0;i<n;i++) cout<<b[i]<<" ";
    for(int i=n-1;i>=0;i--){
        c[i]= ss.order_of_key({a[i],i});
        ss.insert({a[i],i});
    }
    //cout<<endl;
   //for(int i=0;i<n;i++) cout<<c[i]<<" ";
    int ans=0;
    for(int i=0;i<n;i++){
        ans+= b[i]*c[i];
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}