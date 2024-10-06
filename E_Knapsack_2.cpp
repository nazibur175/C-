#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,W;
int w[100+1];
int v[100+1];
int knapsack(int pos, int weight){
    if(pos==n+1) return 0;
    int temp = knapsack(pos+1,weight);
    
    if((w[pos]+weight)<=W){
        temp = max(temp, knapsack(pos+1,weight+w[pos])+v[pos]);
    }
    return temp;
    
}
void solve(){
    cin>>n>>W;
    for(int i=1;i<=n;i++) cin>>w[i]>>v[i];

    int ans = knapsack(1,0);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}