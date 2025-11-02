#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>div;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                div.push_back(i);
                if(i!=n/i)div.push_back(n/i);
            }
        }
        int ans=0;
        for(auto x:div){
            ans+=(n-x)/x;
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