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
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int c=0;
        for(auto x:m){
            c=max(c,x.second);
        }
        int different=n-c;
        int ans=max(0LL,c-different);
        if(n%2==1 && ans==0) ans=1;
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}