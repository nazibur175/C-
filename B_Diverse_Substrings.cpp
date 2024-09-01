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
        int ans=0;
        for(int i=0;i<n;i++){
            set<char>sett;
            map<char,int>m;
            int max_fre=0;
            for(int j=i,k=1;k<=100 && j<n ;j++,k++){
                m[s[j]]++;
                max_fre=max(max_fre,m[s[j]]);
                sett.insert(s[j]);
                if(sett.size()>=max_fre) ans++;
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}