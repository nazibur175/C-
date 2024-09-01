#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n=3;
        map<char,int>m;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int i=0;i<n;i++){
                m[s[i]]++;
            }
        }
        for(auto x:m) if(x.second==2) {
            cout<<x.first<<endl;
            break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}