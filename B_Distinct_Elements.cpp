#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            int in=a[i]-a[i-1];
            if(i-in>0){
                ans.push_back(ans[i-in-1]);
            }
            else{
                ans.push_back(ans.size()+1);
            }
            
        }
        for(auto i:ans){
            cout<<i<<" ";
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