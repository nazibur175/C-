#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        if(m.size()==1) cout<<-1<<endl;
        else cout<<n-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}