#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if((n/2)%2==1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            vector<int>ans;
            int sum=0;
            for(int i=1;i<=n/2;i++){
                ans.push_back(i*2);
                sum+=i*2;
            }
            int sum2=0;
            for(int i=1;i<=n/2-1;i++){
                ans.push_back(i*2-1);
                sum2+=(i*2-1);
            }
            ans.push_back(sum-sum2);
            for(auto x:ans) cout<<x<<" ";
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}