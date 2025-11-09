!!#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    vector<int>coins;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        coins.push_back(0);
        int mul = 1;
        coins.push_back(1);
        while(mul * 2 < x){
            coins.push_back(mul);
            mul *= 2;
        }
        coins.push_back(x - mul);
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}