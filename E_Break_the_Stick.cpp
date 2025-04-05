#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        if(n%2==0){
            if(x<n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(x%2==1 && x<n)cout<<"YES"<<endl;
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