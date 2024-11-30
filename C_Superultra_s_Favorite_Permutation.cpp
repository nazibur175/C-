#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>ans;
        if(n<5){
            cout<<-1<<endl;
            continue;
        }
        for(int i=1;i<=n;i+=2){
            if(i==5) continue;
            ans.push_back(i);
        }
        ans.push_back(5);
        ans.push_back(4);
        for(int i=2;i<=n;i+=2){
            if(i==4) continue;
            ans.push_back(i);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}