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
        map<char,int>mp;
        mp[s[0]]++;
        mp[s[n-1]]++;
        int f=0;
        for(int i=1;i<n-1;i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                f=1;
                break;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}