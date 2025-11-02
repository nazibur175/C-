#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y,z;
        cin>>x>>y>>z;
        int f=1;
        for (int i=0;i<31;i++) {
            int xi = (x>>i)&1;
            int yi = (y>>i)&1;
            int zi = (z>>i)&1;

            if ((xi == 1 && yi == 0 && zi == 1) || (xi == 1 && yi == 1 && zi == 0) || (xi == 0 && yi == 1 && zi == 1)) {
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}