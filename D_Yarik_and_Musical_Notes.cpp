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
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int x=m[1]*m[2];
        int ans=x;
        for(auto it:m){
            ans+=it.second*(it.second-1)/2;
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