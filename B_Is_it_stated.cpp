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
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='i' && s[i+1]=='t'){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}