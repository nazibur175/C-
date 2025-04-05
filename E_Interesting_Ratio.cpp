#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e7+10;
vector<int> prime;
bool isprime[N];
void seive(){
    memset(isprime,1,sizeof(isprime));
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(isprime[i]){
            for(int j=i*i;j<=N;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
}
void solve(){
    seive();
    test{
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<prime.size();i++){
            if(prime[i]>n) break;
            ans+=n/prime[i];
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}