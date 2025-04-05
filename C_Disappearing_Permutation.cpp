#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            mp[a[i]]=i;
        }
        int q[n+1];
        for(int i=1;i<=n;i++){
            cin>>q[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            int x=q[i];
            while(a[x]!=0){
                int temp=x;
                x=a[x];
                a[temp]=0;
                ans++;
            }
            cout<<ans;
            if(i!=n){
                cout<<" ";
            }
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