#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){

    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        int ar[m + 1];
        ar[0] = 1;
        int prev = 1;
        for(int i = 1; i <= m; i++){
            if(i & 1){
                ar[i] = ar[i - 1] + prev;     
            }
            else {
                ar[i] = ar[i - 1] + prev * 2;
                prev *= 2;
            }
        }
        cout << ar[m] << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}