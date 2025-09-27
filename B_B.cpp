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
    if (minPrime[i] == 0) {         //If i is prime
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


void solve(){
    min_prime_divisor();
    int a,b,k;
    cin>>a>>b>>k;
    vector<int>v;
    for(int i=a;i<=b;i++){
        if(minPrime[i]==i) {
            v.push_back(i);
            if(v.size()>=k) break;
        }
    }
    
    if(v.size()<k) cout<<-1<<endl;

    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}