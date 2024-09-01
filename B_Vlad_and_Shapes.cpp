#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        set<int>se;
        for(int i=0;i<n;i++) {
            string  s;
            cin>>s;
            int c=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='1') c++;
            }
            if(c) se.insert(c);
        }
        if(se.size()==1) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}