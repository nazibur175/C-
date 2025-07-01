#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=5e5+9;
int mob[N];
int check[N];
int cnt[N];
int tog[N];
vector<int>g[N];
void sieve(){
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            g[j].push_back(i);
        }
    }
    for(int i=1;i<N;i++) mob[i]=1;
    for(int i=2;i<N;i++){
        if(check[i]) continue;
        for(int j=i;j<N;j+=i){
            check[j]=1;
            mob[j]*=-1;
            if(j%(i*i)==0) mob[j]=0;
        }
    }
}
void solve(){
    sieve();
    int n,q;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        tog[i]=-1;
    }
    int ans=0;
    while(q--){
        int in;
        cin>>in;
        tog[in]*=-1;
        if(tog[in]==1){
            for(auto x:g[a[in]]){
                ans+=mob[x]*cnt[x];
                cnt[x]++;
            }
        }
        else {
            for(auto x:g[a[in]]){
                cnt[x]--;
                ans-=mob[x]*cnt[x];
            }
            
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}