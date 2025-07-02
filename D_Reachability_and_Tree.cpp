#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 3e5 + 10;
vector<int>adj[N];
void solve(){
    test{
        int n;
        cin>>n;
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }
        for(int i=1;i<n;i++){       
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int leaf_node=0;
        int desired_node2=0;
        int desired_node=0;
        for(int i=1;i<=n;i++){
            for(auto temp:adj[i]){
                if(adj[temp].size()==2){
                    for(auto it:adj[temp]){
                        if(it!=i){
                            leaf_node=i;
                            desired_node2=temp;
                            desired_node=it;
                            break;
                        }
                    }
                }
            }
            if(desired_node!=0) break;
        }
        if(desired_node==0){
            cout<<"NO"<<endl;
            continue;
        }
        // cout<<leaf_node<<" "<<desired_node2<<" "<<desired_node<<endl;
        vector<pair<int,int>>ans;
        ans.push_back({leaf_node,desired_node2});
        ans.push_back({desired_node2,desired_node});
        queue<pair<int,int>>q;
        vector<int>visited(n+1,0);
        q.push({desired_node,1});
        q.push({leaf_node,0});
        visited[desired_node]=1;
        visited[desired_node2]=1;
        visited[leaf_node]=1;
        while(!q.empty()){
            pair<int,int> node=q.front();
            q.pop();
            for(auto it:adj[node.first]){
                if(!visited[it]){
                    visited[it]=1;
                    if(node.second==1){
                        ans.push_back({it,node.first});
                        q.push({it,0});
                    }
                    else if(node.second==0){
                        ans.push_back({node.first,it});
                        q.push({it,1});
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}