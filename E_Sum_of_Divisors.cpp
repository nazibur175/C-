#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)
int inv2=0;
int bigmod(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
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
    //1 to 20 kotobar ache divisor hisebe in 1 to 20
    //20,10,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1
	inv2 =bigmod(2,mod-2);
    while (at <= n) {
        int q = n / at;
        int next_num = (n / q) ;
        //cerr<<n<<" "<<at<<" "<<q<<" "<<next_num<<endl;
        total_sum+= q*cal(at, next_num ) % mod;
        total_sum%=mod;
        at = next_num+1;
    }
    cout << total_sum << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
