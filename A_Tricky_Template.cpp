#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
               f=1;
               break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}