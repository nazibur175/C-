#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int ans=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0) ans*=0;
            else if(x<0) ans*=-1;
        }
        cout<<(ans<=0 ? "0\n":"1\n1 0\n");
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}