#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int c0=0;
        bool is2=false;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x==0) c0++;
            else if(x>=2) is2=true;
        }
        if(c0<=(n+1)/2) cout<<"0"<<endl;
        else if(c0==n || is2) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}