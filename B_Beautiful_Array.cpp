#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<int> ans(n,0);
        if(s < b*k || s > (b*k + (n)*(k-1))) {
            cout << -1 << endl;
            continue;
        }
        int rem = s - b*k;
        ans[0]=b*k;
        for(int i=0;i<n;i++){
            if(rem >= k-1) {
                ans[i] += (k-1);
                rem -= (k-1);
            } else {
                ans[i] += rem;
                rem = 0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}