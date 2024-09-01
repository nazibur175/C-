#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int ans=0;
        int x=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='.'){
                c++;
            if(c==3){
                x=1;
            }
            }
            else {
                ans+=c;
                c=0;
            }
        }
        ans+=c;
        if(x) cout<<2<<endl;
        else cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}