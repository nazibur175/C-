#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0) e++;
            else o++;
        }
        int ans=0;
        if(o){
            ans=1;
            if(e) ans+=e;
           
        }
        ans += max(0ll,(o-1)/2);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}