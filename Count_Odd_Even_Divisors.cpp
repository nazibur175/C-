#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int odd=0,even=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(i%2==0) even++;
                else odd++;
            }
        }
        cout<<odd<<" "<<even<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}