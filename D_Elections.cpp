#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,c;
        cin>>n>>c;
        int a[n+1]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        int pre[n+1]={0};

        int mx=*max_element(a,a+n+1);
     
        int in=0;
       
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
            if(!in && a[i]==mx){
                in=i;
            }
        }
        
        int mxc=max(mx,a[1]+c);
        if(a[1]+c==mxc ) in=1;
        for(int i=1;i<=n;i++){
            if(i==in){
                cout<<0<<" ";
            }
            else if((pre[i]+c)>=mx){
                cout<<i-1<<" ";
            }
            else cout<<i<<" ";
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