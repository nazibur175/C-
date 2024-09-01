#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        n=n*2;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int i=0,j=n-1;
        vector<pair<int,int>>v;
        while (i<j)
        {
            v.push_back({a[i],a[j]});
            i++;
            j--;
        }
        n=v.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=(abs(v[i].first-v[i+1].first)+abs(v[i].second-v[i+1].second));
        }
        cout<<ans<<endl;
        for(auto x:v){
            cout<<x.first<<" "<<x.second<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}