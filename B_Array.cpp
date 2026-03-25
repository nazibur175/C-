#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int cnt1=0,cnt2=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    cnt1++;
                }
                else if(a[j]<a[i]){
                    cnt2++;
                }
            }
            ans.push_back(max(cnt1,cnt2));
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}