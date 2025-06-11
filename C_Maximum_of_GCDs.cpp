#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+2];
        for(int i=1;i<=n;i++)cin>>a[i];
        map<int,map<int,int>>mp;
        for(int i=n;i>=1;i--){
            mp[i][a[i]]=max(i,mp[i+1][a[i]]);

            for(auto x:mp[i+1]){
                int gc=__gcd(a[i],x.first);
                mp[i][gc]=max({mp[i][gc],mp[i+1][gc],x.second});
            }
        }

        // for(int i=1;i<=n;i++){
        //     for(auto x:mp[i]){
        //         cout<<i<<" "<<x.first<<" "<<x.second<<endl;
        //     }
        // }
        //  cout<<"---------"<<endl;

        //gc, len
        map<int,int>m;
        for(int i=1;i<=n;i++){
            for(auto x:mp[i]){
                m[x.first]=max(m[x.first],x.second-i+1);
            }
        }
        //gc, len
        vector<pair<int,int>>v;
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end());
          
        for(int k=1;k<=n;k++){
            while(v.back().second<k) v.pop_back();
            cout<<v.back().first;
            if(k!=n) cout<<" ";
        }
        cout<<endl;
    
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}