#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        int bc=__builtin_popcount(x);
        if(x==0){
            if(n==1) cout<<"-1"<<endl;
            else if(n%2==0) cout<<n<<endl;
            else cout<<n-1+4<<endl;
        }
        else if(x==1){
            if(n%2) cout<<n<<endl;
            else cout<<n-1+4<<endl;
        }
        else if(bc>=n) cout<<x<<endl;
        else if((n-bc)%2==0){
            cout<<x+n-bc<<endl;
        }
        else cout<<x+n-bc+1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}