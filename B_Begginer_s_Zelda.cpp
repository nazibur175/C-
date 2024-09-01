#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define MAX 100000+9


void solve(){
    test{
    int n;
    cin>>n;
    vector<int> edges[n+9];
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        }
    int c=0;
    for(int i=1;i<=n;i++){
        if(edges[i].size()==1) c++;
    } 
        cout<<(c+1)/2<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}