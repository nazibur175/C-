#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)
const int N=1000000;
vector<int>v[N];
void solve(){
    int n;
    cin>>n;
    // int a[n];
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
       cout<< upper_bound(v[x].begin(),v[x].end(),r)-lower_bound(v[x].begin(),v[x].end(),l) <<endl;
    }
    

}
int32_t main()
{
operation();
solve();

}