#include <iostream>
#include <vector>
using namespace std;
#define int long long int
vector<pair<long long, int>> primeFactors(long long n) {
    vector<pair<long long, int>> factors;
    for (long long i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            factors.push_back(make_pair(i, count));
        }
    }
    if (n > 1) {
        factors.push_back(make_pair(n, 1));
    }
    return factors;
}

long long countDivisors(long long n) {
    vector<pair<long long, int>> factors = primeFactors(n);
    long long divisors = 1;
    for (auto factor : factors) {
        divisors *= (factor.second + 1);
    }
    return divisors;
}
int32_t main () {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans = countDivisors(n);
        cout<<ans<<endl;
    }
    
    return 0;
}
