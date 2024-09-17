//cd "d:\CPP\" ; if ($?) { g++ gen.cpp -o gen } ; if ($?) { .\gen }
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
	return uniform_int_distribution<int>(l, r) (rng);
}
void solve(){
    int a = my_rand(1,5);
    int b = my_rand(1,5);
    cout<<a<<" "<<b<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}