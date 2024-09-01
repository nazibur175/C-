#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int x=2;
        vector<int>ans{0};
        int extra=0;
        while (1)
        {
            if((1LL<<x)<=n) ans.push_back(ans.back()+1);
            else {
                extra=n-(1LL<<(x-1));
                break;
            }
            x++;
        }
        for(int i=60;i>=0;i--){
            if(extra&(1LL<<i)) ans.push_back(ans[i]);
        }
        cout<<ans.size()<<endl;
        for(auto xx:ans) cout<<xx<<" ";
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}