#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int f=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) {
                f=1;
                break;
            }
        }
        if(f) cout<<1<<endl;
        else cout<<n<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}