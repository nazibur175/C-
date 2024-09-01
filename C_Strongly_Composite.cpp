#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void primeFactorization(int n, map<int,int>&m) {
    while (n % 2 == 0) {
        //factors.push_back(2);
        m[2]++;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            //factors.push_back(i);
            m[i]++;
            n /= i;
        }
    }
    if (n > 2) {
        //factors.push_back(n);
        m[n]++;
    }
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            primeFactorization(a[i],m);
        }
        int ans=0;
        int c=0;
        for(auto x:m){
            ans+=x.second/2;
            c+=x.second%2;
        }
        ans+=c/3;
        cout<<ans<<endl;


    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}