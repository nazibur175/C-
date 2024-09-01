#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int>edges[n+9];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        vector<int>siz;
        set<int>s;
        int target=0;
        for(int i=1;i<=n;i++){
            s.insert(edges[i].size());
            if(edges[i].size()==1){
                target=edges[i].front();
            }
        }
        int subroot=edges[target].size()-1;
        int root=0;
        for(auto x:edges[target]){
            int temp=edges[x].size();
            root =max(root,temp);
        }

        cout<<root<<" "<<subroot<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}