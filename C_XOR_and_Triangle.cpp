#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x;
        cin>>x;
        int ans=-1;
        for(int i=0;i<30;i++){
            for(int j=0;j<30;j++){
             int y = (1ll<<i) | (1ll<<j);
                if(y<x && (x+y)>(x^y) && (y+(x^y))>x){
                    ans=y;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}