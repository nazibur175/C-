#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=5e6;
int minPrime[N + 1];
int factor[N+1];
int presum[N+1];
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

//Factorization with min prime

int factorize(int n) {
    int cnt=0;
    while (n != 1) {
        cnt++;
        n /= minPrime[n];
    }
    return cnt;
}

void solve(){
    min_prime_divisor();
    for(int i=2;i<=N;i++){
        factor[i]=factorize(i);
    }
    for(int i=1;i<=N;i++){
        presum[i]=presum[i-1]+factor[i];
    }
    
    test{
        int a,b;
        cin>>a>>b;
        int ans= presum[a]-presum[b];
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}