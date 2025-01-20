#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int>v[n+1];
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
            sort(v[i].begin(),v[i].end());
            mp[v[i][0]+1]=i;
        }
        int f=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<m-1;j++){
                if((v[i][j+1]-v[i][j])!=n){
                    f=0;
                    break;
                }
            }
            if(f==0){
                break;
            }
        }
        if(f==0){
            cout<<"-1"<<endl;
            continue;
        }
        for(auto i:mp){
            cout<<i.second<<" ";
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