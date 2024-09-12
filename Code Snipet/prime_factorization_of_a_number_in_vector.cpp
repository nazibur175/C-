#include<bits/stdc++.h>
using namespace std;
#define int long long 
void primeFactorization(int n, vector<int>& factors) {
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
}

int32_t main() {
    int num;
    cin >> num;
    vector<int> primeFactors;
    primeFactorization(num, primeFactors);
    for (int factor : primeFactors) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}
