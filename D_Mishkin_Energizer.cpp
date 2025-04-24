#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s; 
        cin>>s;
        vector<int>ans;
        int j=-1;
        for(int i=0;i<n-1;i++){
            if(s[i+1]==s[i]) continue;
            int x=i-j;
            int c=ans.size();
            for(int j=0;j<2*x;j++){
                ans.push_back(i+c+1);
            }
          j = i;
        }
        if(j==-1) {
            cout<<"-1\n";
            continue;
        }
        int x = n-j-1;
        for(int i=0;i<2*x;i++){
            ans.push_back(n + ans.size() - x);
        }
        cout<<ans.size()<<"\n";
        for(auto i: ans){
            cout<<i<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}