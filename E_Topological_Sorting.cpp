#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,m;
vector<int>adj[100000+9];
vector<int>indegree(100000+9,0);
vector<int>ans;
set<int>st;
int cnt=0;
void bfs(){
    while(!st.empty()){
        int node = *st.begin();
        st.erase(st.begin());
        ans.push_back(node);
        cnt++;
        for(auto child: adj[node]){
            indegree[child]--;
            if(indegree[child]==0){
                st.insert(child);
            }
        }
    }
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;
    }
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            st.insert(i);
        }
    }
    bfs();
    if(cnt!=n){
        cout<<"Sandro fails."<<endl;
    }
    else{
        for(auto i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}