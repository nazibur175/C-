#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
		cin >> n;
		int x[n], y[n];
		for (int i = 0; i < n; ++i)
			cin >> x[i] >> y[i];
		sort(x, x + n);
		sort(y, y + n);
		int ind1 = n / 2;
		int ind2 = (n - 1) / 2;
		cout << 1LL * (x[ind1] - x[ind2] + 1) * (y[ind1] - y[ind2] + 1) << endl;
    }
    // সমস্যা আসলে ২D না, ১D তেই ভেঙে ফেলা যায়।
    // শুধু x coordinate চেইঞ্জ করো, তাহলে y-এর উপর ভিত্তি করে দূরত্ব অংশ বদলায় না। 
    // আবার y-কে চেইঞ্জ করলে x-এর অংশ বদলায় না।
    // সুতরাং, আমরা সমস্যাটিকে x এবং y আলাদা করে ১D তে সমাধান করতে পারি।
    // তাহলে, x এবং y এর জন্য আলাদা করে median বের করতে হবে।
    // median বের করার জন্য n/2 তম এবং (n-1)/2 তম এর মধ্যে দূরত্ব বের করতে হবে।
    // তারপর দূরত্বের গুনফল বের করতে হবে।


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}