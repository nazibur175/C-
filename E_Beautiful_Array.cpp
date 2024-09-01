#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 20;
const int inf = 1e18 + 20;
int n, k, a[N];
int pref[N], suff[N];
bool cmp(int i,int j){
    if(i%k==j%k) return i<j;
    return (i%k)<(j%k);
}
void solve(){
    test{
        cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n, cmp);
		bool flag = false;
		int ans = 0;

		for (int i = 0;i<n;i++) {
			int j=i;
			while (j+1<n && (a[i] % k) == (a[j + 1] % k)) j++;

			if ((j - i + 1) % 2) {
				if (flag) {
					ans = -1;
					break;
				}

				for (int l = i; l <= j; l++)
					pref[l] = suff[l] = 0;

				for (int l = i + 2; l <= j; l += 2)
					pref[l] = pref[l - 2] + (a[l - 1] - a[l - 2]) / k;

				for (int l = j - 2; l >= i; l -= 2)
					suff[l] = suff[l + 2] + (a[l + 2] - a[l + 1]) / k;

				int best = inf;
				for (int l = i; l <= j; l += 2) {
					best = min(best, pref[l] + suff[l]);
				}

				ans+=best;
				flag=true;
			}
			else {
				for (int l = i; l < j; l += 2)
					ans += (a[l + 1] - a[l]) / k;
			}
			i = j;
		}
		cout << ans << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}