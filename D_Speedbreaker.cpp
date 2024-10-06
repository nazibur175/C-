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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pre[n+5]={0};
        for(int i=1;i<=n;i++){
            //left
            pre[max(1ll,(i-a[i]+1))]++;
            //right
        pre[min(n+3,(i+a[i]))]--;
        }
        int cnt =0;
        int ans =0;

        int mn=a[1];
        int pre_mn[n+2]={0};
        for(int i=1;i<=n;i++){
            mn=min(mn,a[i]);
            pre_mn[i]=mn;
        }

        // for(int i=1;i<=n;i++) cout<<pre_mn[i]<<" ";
        // cout<<endl;

        int tru=1;
        for(int i=1;i<=n;i++){
            if(i-a[i]<1) continue;
            else if(pre_mn[i-a[i]] <= a[i]){
                tru=0;
                break;
            }
        }

        for(int i=1;i<=n;i++){
             cnt+=pre[i];
             if(cnt==n){
                 ans++;
             }
            //cout<<pre[i]<<" ";
        }
        //cout<<endl;
        if(tru)
        cout<<ans<<endl;
        else cout<<0<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}