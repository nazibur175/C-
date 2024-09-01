#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int maxX = 1e6;
int N, x, d[maxX+1];
void init(){
    for(int i = 1; i <= maxX; i++)
        for(int j = i; j <= maxX; j += i)
            d[j]++;
}
void solve(){
    init();
    test{
        int n;
        cin>>n;
        cout<<d[n]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}