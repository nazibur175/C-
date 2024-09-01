#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++) cin>>a[i];
        int pre[n+9]={0};
        int post[n+9]={0};
        pre[1]=0;
        //pre[n]=1;
        a[n+1]=INT64_MAX;
        for(int i=2;i<=n;i++){
            if((a[i]-a[i-1])<(a[i+1]-a[i]))
                pre[i]=1+pre[i-1];
            else pre[i]=a[i]-a[i-1]+pre[i-1];
        }
        // for(int i=1;i<=n;i++) cout<<pre[i]<<" ";
        // cout<<endl;
        post[n]=0;
        for(int i=n-1;i>=1;i--){
            if(i==1)
                post[1]=1+post[i+1];
            else if((a[i]-a[i-1])<(a[i+1]-a[i]))
                post[i]=a[i+1]-a[i]+post[i+1];
            else post[i]=1+post[i+1];
        }
        // for(int i=1;i<=n;i++) cout<<post[i]<<" ";
        // cout<<endl;
        int q;
        cin>>q;
        while (q--)
        {
            int x,y;
            cin>>x>>y;
            if(x==y) cout<<0<<endl;
            else if(x<y) cout<<post[x]-post[y]<<endl;
            else cout<<pre[x]-pre[y]<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}