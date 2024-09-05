#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        
        if(a%2==1) {
            cout<<"NO"<<endl;
            // continue;
        }
        else{
            b=b%2;
            //cout<<b<<endl;
            if(b==0) cout<<"YES"<<endl;
            else if(a>=2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}