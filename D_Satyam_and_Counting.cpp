#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>m1;
        map<int,int>m0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            // y=0 or 1
            if(y==0){
                m0[x]++;
            }
            else m1[x]++;
        }
        int ans=0;
        int m0_sz=m0.size();
        int m1_sz=m1.size();

        for(auto x:m0){
            if(x.second && m1[x.first]){
                ans+=m0_sz-1;
            }
        }

        //cout<<ans<<endl;
        for(auto x:m1){
            if(x.second && m0[x.first]){
                ans+=m1_sz-1;
            }
        }

        //cout<<ans<<endl;

        for(auto x:m1){
            if(x.second && m0[x.first-1] && m0[x.first+1])
            ans++;
        }

        for(auto x:m0){
            if(x.second && m1[x.first-1] && m1[x.first+1])
            ans++;
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