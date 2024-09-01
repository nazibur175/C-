#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector <pair <int, int>> ans;
        string s = to_string(n);
        int len = s.size();
        for (int a=1; a<=10000; a++) {
        int l = a*len;
        for (int pre_taken = 1; pre_taken<=min(6LL, l-1); pre_taken++) {
            int b = l-pre_taken;
            string temp = "";
            for (int i = 0; i<pre_taken; i++){
                temp += s[i % len];
            }
            if (a * n - b == stoll(temp)) 
                ans.emplace_back(a, b);
        }
        }
        sort(ans.begin(), ans.end());
        cout<<ans.size()<<endl;
        for (auto it : ans) 
            cout<<it.first<<" "<<it.second<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}