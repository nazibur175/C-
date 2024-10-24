#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        //vector<int>temp;
        int ans = 0;
        if(k>=2){
            ans+=v[0];
            ans+=v[1];
            ans+=v[k];
            ans+=v.back();
        }
        else {
            ans+=2*v.front();
            ans+=v.back();
            ans+=v[1];
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