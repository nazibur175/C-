#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>g[5];
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                int x;
                cin>>x;
                g[i].push_back(x);
            }
        }
        multimap<int,vector<int>>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vector<int>v(21);
            for(int ii=1;ii<=20;ii++){
                cin>>v[ii];
            }
            vector<int>vv;
            for(int ii=0;ii<5;ii++){
                int sum=0;
                for(int j=0;j<4;j++){
                    sum+=v[g[ii][j]];
                }
                vv.push_back(sum);
            }
            m.insert({x,vv});
            // for(auto xx:vv) cout<<xx<<" ";
            // cout<<endl;
        }
        
        int ans=1e18;
        vector<int>gg(5,ans);
        for(auto &[val,vec]:m){
            int temp=0;
            for(int i=0;i<5;i++){
                gg[i]=min(gg[i],vec[i]);
                temp+=gg[i];
            }
            temp+=val;
            ans=min(ans,temp);
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