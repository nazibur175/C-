#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5+5;
vector<int>d[N+1];
void pre(){
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            d[j].push_back(i);
        }
    }
}
void solve(){
        int n,m;
        cin>>n>>m;
        vector<int>a(m+1);
        for(int i=1;i<=m;i++){
            cin>>a[i];
        }
        reverse(a.begin()+1,a.end());
        vector<int>ans(n+1,-1);
        for(int i=1;i<=n;i++){
            set<int>ban;
            for(auto j:d[i]){
                ban.insert(ans[j]);
            }
            for(int j=1;j<=m;j++){
                if(ban.find(j)==ban.end()){
                    ans[i] = j;
                    break;
                }
            }
            if(ans[i]==-1){
                cout<<"-1"<<endl;
                return;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<a[ans[i]]<<" ";
        }
        cout<<endl;
    }
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
pre();
 test{
    solve();
 }

}