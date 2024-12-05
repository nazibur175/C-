#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++) cin>>v[i],mp[v[i]]++;
        
        vector<int>vv;
        for(auto x:mp){
            if(x.second==1){
                vv.push_back(x.first);
            }
        }
        int extra = mp.size()-vv.size();
        int ans = (vv.size()+1)/2;
        cout<<(2*ans)+extra<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}