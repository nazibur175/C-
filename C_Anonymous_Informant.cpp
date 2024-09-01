#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        k = min(k,n);
        int last =n-1;
        int f=1;
        for (int i = 0; i < k; i++) {
            if (a[last] > n) {
                f=0;
                break;
            }
        last += n - a[last];
        last%=n;
        }
        if(f==0)
            cout << "No"<<endl;
        else 
            cout << "Yes"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}