#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9]={0};
        int pre[n+9]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pre[i]=pre[i-1]^a[i];
        }
        
        if(pre[n]==0) {
            cout<<"YES"<<endl;
            continue;
        }
        int f=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<n;j++){
                if(pre[i]== (pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j])){
                    f=1;
                    break;
                }
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}