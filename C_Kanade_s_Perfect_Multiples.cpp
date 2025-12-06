#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int>mp;
        map<int,int>vis;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=1;
            vis[a[i]]=1;
        }
        vector<int>res;
        int f=1;
        for(auto x:mp){
            if(vis[x.first]==2) continue;
            res.push_back(x.first);
            for(int i=1;i*x.first<=k;i++){
                if(mp.find(i*x.first)!=mp.end()){
                    vis[i*x.first]=2;
                }
                else{
                    f=0;
                    break;
                }
            }
        }
        if(f==0) cout<<-1<<"\n";
        else{
            cout<<res.size()<<"\n";
            for(auto x:res){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}