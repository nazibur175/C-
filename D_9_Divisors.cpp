#include <bits/stdc++.h>
using namespace std;
#define int long long
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

vector<int> sieve(int N) {
    vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= N; ++i) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

void solve() {
    int n;
    cin >> n;
    vector<int> primes = sieve(sqrt(n));
    set<int> result;
    for (int p : primes) {
        if (pow(p, 8) <= n) {
            result.insert(pow(p, 8));
        } else {
            break;
        }
    }

    for (int i = 0; i < primes.size(); ++i) {
        for (int j = i + 1; j < primes.size(); ++j) {
            int p1 = primes[i], p2 = primes[j];
            if (pow(p1, 2) * pow(p2, 2) <= n) {
                result.insert(pow(p1, 2) * pow(p2, 2));
            } else {
                break;
            }
        }
    }

    cout << result.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
