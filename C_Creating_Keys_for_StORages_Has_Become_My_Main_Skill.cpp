#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int>ans;
        int pre=0;
        for(int i=0;i<n;i++){
            if((x|i)<=x){
                ans.push_back(i);
                pre|=i;
            }
            else ans.push_back(0);
        }
        if(pre!=x){
            ans.pop_back();
            ans.push_back(x);
        }
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}