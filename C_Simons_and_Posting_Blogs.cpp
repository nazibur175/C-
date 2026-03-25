#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e6 + 9;
// int vis[N];
void solve(){
    test{
        int n;
        cin>>n;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int>temp;
            unordered_map<int,int>a;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            reverse(temp.begin(),temp.end());
            vector<int>t2;
            for(auto x:temp){
                if(a[x]==0){
                    t2.push_back(x);
                }
                a[x]=1;
            }
            v.push_back(t2);
        }
        vector<int>ans;
        unordered_map<int,int>vis;
        while (v.size())
        {
            sort(v.begin(),v.end());
            for(auto x:v[0]){
                ans.push_back(x);
                vis[x]=1;
            }
            vector<vector<int>>temp;
            for(auto x:v){
                vector<int>t;
                for(auto xx:x){
                    if(vis[xx]==0) t.push_back(xx);
                }
                if(t.size())
                temp.push_back(t);
            }
            v=temp;
            // break;
        }
        // cout<<"HERE"<<endl;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}