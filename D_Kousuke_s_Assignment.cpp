#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int sum=0;
        int ans=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(m[sum]!=0 || sum==0){
               //cout<<sum<<endl;
               ans++;
               m.clear();
               sum=0;
            }
            m[sum]++;
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