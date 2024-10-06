#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];

        vector<int>ev;
        vector<int>od;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i%2==0) ev.push_back(x);
            else od.push_back(x);
        }
        int mx1=0;
        int mx2=0;
        if(ev.size())
         mx1= *max_element(ev.begin(),ev.end());
        if(od.size())
         mx2= *max_element(od.begin(),od.end());
        int ans = max((mx1+ev.size()), (mx2 + od.size()));
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}