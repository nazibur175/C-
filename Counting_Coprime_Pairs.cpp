#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e6+9;
int minPrime[N + 1];
vector<int>factor[N+1];
void min_prime_divisor(){
    for (int i = 2; i * i <= N; ++i) {
    if (minPrime[i] == 0) {         
        for (int j = i * i; j <= N; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= N; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}

vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}


map<pair<int,int>,vector<pair<int,int>>>edge;
map<pair<int,int>,int>vis;
int dfs(pair<int,int>node){
    vis[node]=1;
    int sz=0;
    sz+=node.second;
    for(auto x:edge[node]){
        if(!vis[x]){
            sz+=dfs(x);
        }
    }
    return sz;
}

void solve(){
    min_prime_divisor();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==1){
            edge[{1,0}].push_back({1,1});
            edge[{1,1}].push_back({1,0});
            continue;
        }
        vector<int>v=factorize(a[i]);
        for(auto x:v){
            edge[{x,0}].push_back({a[i],1});
            edge[{a[i],1}].push_back({x,0});
        }
    }
    int ans=0;
    //cout<<edge[{1,1}].size()<<endl;
    for(int i=0;i<n;i++){
        if(!vis[{a[i],1}]){
            int temp = dfs({a[i],1});
            ans+= (n-temp);
            cout<<i<<" "<<temp<<endl;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}