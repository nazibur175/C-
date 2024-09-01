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
        int ma=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ma=max(ma,a[i]);
        }
        int in=1e5+9;
        int vis[in]={0};
         for(int i=0;i<n;i++){
             //cout<<"x"<<endl;
             if(vis[a[i]]==0){
                 cout<<a[i]<<" ";
                 vis[a[i]]=1;
             }
            else cout<<ma<<" ";
         }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}