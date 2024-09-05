#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];

        string s;
        cin>>s;
        int aa[n+1]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                aa[i+1]=1;
            }
        }

        int res[n+1]={0};
        int vis[n+1]={0};
        for(int i=1;i<=n;i++){
            if(vis[i]) continue;
            int temp = i;
            int ans =0;
            vector<int>cycle;
            while (1)
            {
                ans+= aa[a[temp]];
                cycle.push_back(temp);
                vis[temp]=1;
                temp=a[temp];
                
                if(temp==i){
                    break;
                }
                // if(temp<i){
                //     ans+=res[temp];
                //     break;
                // }
            }
            //res[i]=ans;
            for(auto x:cycle) res[x]=ans;
            
        }
        for(int i=1;i<=n;i++) {
            cout<<res[i]<<" ";
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