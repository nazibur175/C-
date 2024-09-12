#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5;
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

//Factorization with min prime

vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}

void solve(){
    min_prime_divisor();
    for(int i=2;i<=N;i++){
        factor[i]=factorize(i);
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}