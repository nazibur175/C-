#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        vector<pair<int,int>>dis;
        for(int i=0;i<n-1;i++){
            if(v[i].first>v[i+1].first){
                int x=v[i].first - v[i+1].first;
                dis.push_back({x,v[i+1].second});
            }
        }
        sort(dis.begin(),dis.end());
        int op=n;
        vector<int>ans;
        int val=1;
        for(auto &x:dis){
            while (x.first>0 && n)
            {
                n--; //operation
                x.first=x.first-val;
                val++; //val increse
                ans.push_back(x.second); //target index;
            }
            
        }
        for(int i=1;i<=n;i++){
            ans.push_back(n);
        }
        for(auto x:ans){
            cout<<x<<" ";
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