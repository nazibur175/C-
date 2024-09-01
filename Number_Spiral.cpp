#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int y,x;
        cin>>y>>x;
        if(y>x){
            if(y%2==0){
                cout<<y*y - (x-1)<<endl;
            }
            else 
                cout<<(y-1)*(y-1)+1 +(x-1)<<endl;
        }
        else {
            if(x%2==1){
                cout<<x*x - (y-1)<<endl;
            }
            else 
                cout<<(x-1)*(x-1)+1 + (y-1)<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}