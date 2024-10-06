#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a[600];
int n,k;
vector<int>ans;
int cal(int pos,int w){
    if(pos==n || w>k) return mod;
    int temp = cal(pos+1,w);
    if(a[pos]+w <=k){
        temp= min(temp,cal(pos+1,a[pos]+w)+a[pos]);
        ans.push_back(temp);
    }

    return temp;
}
void solve(){
   
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];

    int x = cal(0,0);
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}