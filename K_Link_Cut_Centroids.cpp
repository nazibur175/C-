#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+5;
vector<int>adj[N];
int subtree_size[N];
int n;
int get_subtree_size(int node, int parent = -1) {
	int &res = subtree_size[node];
	res = 1;
	for (int i : adj[node]) {
		if (i == parent) { continue; }
		res += get_subtree_size(i, node);
	}
	return res;
}

int get_centroid(int node, int parent = -1) {
	for (int i : adj[node]) {
		if (i == parent) { continue; }

		if (subtree_size[i] * 2 > n) { return get_centroid(i, node); }
	}
	return node;
}
void solve(){
    test{
        cin>>n;
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        get_subtree_size(1);
        int centroid = get_centroid(1);
        //cout << centroid << endl;
        vector<int>cen;
        cen.push_back(centroid);
        for(auto x:adj[centroid]){
            if(x==centroid){
                continue;
            }
            else if(subtree_size[x]*2==n){
                //cout<<x<<endl;
                //cout<<x<<" "<<centroid<<endl;
                cen.push_back(x);
                break;
            }
        }
        if(cen.size()==1){
            cout<<centroid<<" "<<adj[centroid][0]<<endl;
            cout<<centroid<<" "<<adj[centroid][0]<<endl;
        }
        else{
            int x=cen[1];
            int y;
            for(auto z:adj[centroid]){
                if(z==x){
                    continue;
                }
                else{
                    y=z;
                    break;
                }
            }
            cout<<centroid<<" "<<y<<endl;
            cout<<x<<" "<<y<<endl;
        }
        //cout<<"----"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}