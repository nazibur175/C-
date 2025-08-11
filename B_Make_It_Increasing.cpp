#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        int f=1;
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1]){
               a[i]/= 2;
               if(a[i]==0 && a[i+1]==0){
                   f=0;
                   break;
               }
               ans++;
            }
        }
        if(f==0){
            cout<<-1<<"\n";
            continue;
        }
         else 
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}