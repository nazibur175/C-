#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
int factorize(int n) {
    set<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.insert(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.insert(n);
    }
    int ans=1;
    for(auto x:res) ans*=x;
    return ans;
}
void solve(){
    test{
        int n;
        cin>>n;
        cout<<factorize(n)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}