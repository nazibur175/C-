#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>edge[1000005];
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    int one=0;
    int two=0;
    int many=0;
    for(int i=1;i<=n;i++){
        if(edge[i].size()==1) one++;
        else if(edge[i].size()==2) two++;
        else many++;
    }
    if(one==0 && many==0) cout<<"ring topology"<<endl;
    else if(one==2 && many==0) cout<<"bus topology"<<endl;
    else if(one && many==1 && two==0) cout<<"star topology"<<endl;
    else cout<<"unknown topology"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}