#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n,k;
    cin>>n>>k;
    int op=0;
    if (k==1) {
        cout<<n<<endl;
    }
    else {
        int cnt=0;
        while(n) {
            cnt=cnt + n%k;  
            n=n/k;       
        }

    cout<<cnt<<endl;
    }
}

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}