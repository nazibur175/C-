#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<char,int>m;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int ans=0;
        ans+=min( m['A'],n);
        ans+=min( m['B'],n);
        ans+=min( m['C'],n);
        ans+=min( m['D'],n);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}