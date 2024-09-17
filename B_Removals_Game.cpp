#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>vv(n);

        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) cin>>vv[i];
        if(v==vv) cout<<"Bob"<<endl;
        else{
            reverse(vv.begin(),vv.end());
            if(v==vv) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}