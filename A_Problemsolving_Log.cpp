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
        //string temp="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int ans=0;
        for(auto x:m){
            int need=x.first-'A'+1;
            if(x.second>=need)ans++;
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