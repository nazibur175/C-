#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        map<string,int>mp;
        for(int i=0;i<m;i++){
            string s;
            cin>>s;
            mp[s]++;
        }
        for(int i=0;i<(1<<n);i++){
            string s;
            for(int j=0;j<n;j++){
                if(i&(1<<j)) s+='1';
                else s+='0';
            }
            if(mp[s]==0){
                cout<<s<<"\n";
                break;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}