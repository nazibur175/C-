#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>ans;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(a[i]==0) {
                ans.push_back(cnt);
                for(int i=1;i<=cnt;i++)
                    ans.push_back(0);
                cnt=0;
            }
            else {
                cnt++;
            }
        }
        if(a[n-1]==1){
            cout<<"NO"<<endl;
            continue;
        }
        else cout<<"YES"<<endl;
        reverse(ans.begin(),ans.end());
        for(auto x: ans) cout<<x<< " ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}