#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> ans;
        int temp=10;
        for(int i=1;i<=18;i++){
            int val=1+temp;
            if(val>n) break;
            if(n%val==0){
                ans.push_back(n/val);
            }
            int xx=1e18/10;
            if(temp>xx) break;
            temp*=10;
        }

        cout<<ans.size()<<'\n';
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1) cout<<ans[i]<<"\n";
            else cout<<ans[i]<<" ";
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}