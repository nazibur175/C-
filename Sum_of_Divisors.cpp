#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)
int inv2=0;
// Modular exponentiation function
int bigmod(int a, int b) {
    if (b == 0) return 1;  // Handle case when b == 0
    if (b == 1) return a % mod;
    if (b % 2 == 0) {
        int x = bigmod(a, b / 2);
        return (x * x) % mod;
    } else {
        int x = bigmod(a, b / 2);
        return (x * x % mod) * a % mod;
    }
}
int cal(int start, int end) {
	return ((((end - start + 1) % mod) * ((start + end) % mod) % mod) *
	        inv2 % mod);
}

void solve() {
    int n;
    cin >> n;
    int at = 1;
    int total_sum = 0;
	inv2 =bigmod(2,mod-2);
    while (at <= n) {
        int q = n / at;
        int next_num = (n / q) ;

        total_sum = (total_sum + q*cal(at, next_num )) % mod;
        at = next_num+1;
    }
    cout << total_sum << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
