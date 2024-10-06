#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf = 2e15+20;
const int N=2e5+9;
vector<int>v[N];
int a[N];
bool dfs(int node, int val){
    if(v[node].empty() && a[node]<val) 
        return false;

    if(node==0) val = max(0ll, val-a[node]);
    else if(a[node]<val) val = min(inf,val+ (val - a[node])); 

    for(auto x:v[node]){
        if(!dfs(x,val)) return false;
    }
    return true;
}
void solve(){
    test{
        
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            x--;
            v[x].push_back(i);
        }
        int l=0;
        int r=inf;
        while ((r-l)>1)
        {
            int mid = (l+r)/2;
            if(dfs(0,mid)){
                l=mid;
            }
            else r=mid;
        }
        cout<<l<<endl;
        for(int i=0;i<n;i++) v[i].clear();
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}