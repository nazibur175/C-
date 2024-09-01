#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        //string input="";
        int c=0;
        int ans=0;
        for(int i=1;i<=6;i++){
            string s;
            cin>>s;
            if(s=="W") c++;
            else c=0;
            if(c==3) ans=1;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}