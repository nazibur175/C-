#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int len(int n) {
    if (n==0) return 1; 
    int dig=0;
    while (n!=0) {
        n/=10;
        dig++;
    }
    return dig;
}
int zero(int n) {
    int z=1;
    int cnt=0;
    while(n%(z*=10)==0) {
        cnt++;
    }
    return cnt++;
}
bool cmp(int i, int j) {
    return zero(i) < zero(j);
}
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),cmp);
        for(auto x:a) cout<<x<<" ";
        int ans = 0;
        for (int i=n-1;i>=0;i--) {
            ans +=len(a[i]);
            if (i%2==(n-1)%2) {
                ans-=zero(a[i]);
            }
        }
        if(ans<=m) cout<<"Anna"<<endl;
        else cout<<"Sasha"<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}