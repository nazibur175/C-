#include <bits/stdc++.h>
using namespace std;
#define int long long
#define test int t; cin>>t; while(t--)
const int N = 20;
int dp[N+2][2][200][1025];

int cal(const string &S, int pos, bool tight,int dig_sum, int mask) {
    if (pos == N){
        if(dig_sum==0) return 0;
        int uniq_sum=0;
        for(int i=0;i<=10;i++){
            if(mask&(1ll<<i)){
                uniq_sum+=i;
            }
        }
        if(dig_sum%uniq_sum==0){
            return 1;
        }
        else return 0;
    }

    int &ans = dp[pos][tight][dig_sum][mask];
    if (!tight && ans != -1) return ans;
    int ans2 = 0;

    int lim = tight ? (S[pos] - '0') : 9;
    for (int d = 0; d <= lim; d++) {
        bool new_tight = tight && (d == lim);
        int new_dig_sum=dig_sum+d;
        int new_mask=mask|(1ll<<d);
        ans2 += cal(S, pos + 1, new_tight, new_dig_sum, new_mask);
    }
    if(!tight) ans=ans2;
    return ans2;
}

int c(int x) {
     if (x == 0) return 0;
    string S = to_string(x);
    string zero;
    while(S.size()+zero.size()<N){
        zero.push_back('0');
    }
    S=zero+S;
    // cout<<"="<<S<<endl;
    return cal(S, 0, 1, 0, 0);
}
void solve(){
    memset(dp, -1, sizeof(dp));
    test{
        int l,r;
        cin>>l>>r;
        cout<<c(r)-c(l-1)<<endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
