#include<bits/stdc++.h>
using namespace std;
#define int long long
#define test int t; cin>>t; while(t--)

/** Normalize x in the range [0, mod) */
inline long long normalize(long long x, long long mod) { 
    x %= mod; 
    if (x < 0) x += mod; 
    return x; 
}

/** Extended GCD function to solve ax + by = gcd(a, b)
 *  Returns gcd(a, b) and updates p and q such that:
 *  a * p + b * q = gcd(a, b)
 */
int ext_gcd(int a, int b, int *p, int *q) {
    if (b == 0) {
        *p = 1;
        *q = 0;
        return a;
    }
    int p1, q1;
    int gcd = ext_gcd(b, a % b, &p1, &q1);
    *p = q1;
    *q = p1 - (a / b) * q1;
    return gcd;
}

/** Works for non-coprime moduli.
 *  Returns {-1,-1} if solution does not exist or input is invalid.
 *  Otherwise, returns {x,L}, where x is the solution unique to mod L
 */
pair<int, int> chinese_remainder_theorem(vector<int> A, vector<int> M) {
    if (A.size() != M.size()) return {-1, -1}; /** Invalid input */
 
    int n = A.size();
    int a1 = A[0];
    int m1 = M[0];
 
    /** Merge the solution with remaining equations */
    for (int i = 1; i < n; i++) {
        int a2 = A[i];
        int m2 = M[i];
 
        int g = __gcd(m1, m2); // GCD of moduli
        if (a1 % g != a2 % g) return {-1, -1}; /** No solution exists */
 
        /** Merge the two equations */
        int p, q;
        ext_gcd(m1 / g, m2 / g, &p, &q); // Get p and q for the extended GCD
 
        // Compute LCM of m1 and m2
        __int128 mod = m1 / g * m2;

        /** Safely compute x using modular arithmetic with __int128 to avoid overflow */
        __int128 term1 = (__int128(a1) * (m2 / g) % mod * q % mod) % mod;
        __int128 term2 = (__int128(a2) * (m1 / g) % mod * p % mod) % mod;
        __int128 x = (term1 + term2) % mod;

        /** Update a1 and m1 with the merged equation */
        a1 = normalize((int)x, mod);  /** Ensure result is non-negative */
        m1 = mod;
    }
    return {a1, m1};
}

void solve() {
    test{
        int a, m, aa, mm;
        cin >> a >> m >> aa >> mm;

        vector<int> A, M;
        A.push_back(a);
        A.push_back(aa);
        M.push_back(m);
        M.push_back(mm);

        pair<int, int> result = chinese_remainder_theorem(A, M);

        if (result.first == -1) {
            cout << "no solution" << endl;
        } else {
            cout << result.first << " " << result.second << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
