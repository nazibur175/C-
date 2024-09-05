#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int x[n+2]={0};
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int f=1;
        for(int i=1;i<=n;i++){
            if(i==1){
                x[a[i]]=1;
                continue;
            }
            if(x[a[i]-1] || x[a[i]+1]  ){
                x[a[i]]=1;
                continue;
            }
            f=0;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}