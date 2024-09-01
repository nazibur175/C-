#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>x;
        map<int,int>y;
        map<int,int>diag1;
        map<int,int>diag2;

        while (n--)
        {
            int xx,yy;
            cin>>xx>>yy;
            x[xx]++;
            y[yy]++;
            diag1[xx+yy]++;
            diag2[xx-yy]++;
        }
        int ans=0;
        for(auto it:x){
            ans+=it.second*(it.second-1);
        }
        for(auto it:y){
            ans+=it.second*(it.second-1);
        }
        for(auto it:diag1){
            ans+=it.second*(it.second-1);
        }
        for(auto it:diag2){
            ans+=it.second*(it.second-1);
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