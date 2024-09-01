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
        int c0=0;
        int c1=0;
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                f=1;
                break;
            }
            if(s[i]=='0') c0++;
            else c1++;
        }
        if(c0>c1) f=1;
        if(n==1 && s[0]=='0') f=1;
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