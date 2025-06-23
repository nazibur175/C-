#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        if(a.front()>=x && a.back()>=x){
            cout<<abs(a.back()-x)<<endl;
        }
        else if(a.front()<=x && a.back()<=x){
            cout<<abs(a.front()-x)<<endl;
        }
        else {
            int t=abs(a.front()-x);
            int tt=abs(a.back()-x);
            cout<<2*min(t,tt)+max(t,tt)<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}