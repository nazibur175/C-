#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        //int even=(n/2)*m +1;
        int x=n/2;
        x=x*m;
        int odd=x+1;
        int even=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i%2==0) {
                    cout<<even<<" ";
                    even++;
                }
                else {
                    cout<<odd<<" ";
                    odd++;
                }
            }
            cout<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}