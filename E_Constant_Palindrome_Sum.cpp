#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int dif[2*k+9]={0};
        for(int i=1;i<=n/2;i++){
            int x = a[i];
            int y = a[n-i+1];
            // sum x+y = o operation
            dif[x+y]-=1;
            dif[x+y+1]+=1;
            // min(x,y)+1 to max(x,y)+k = 1 operation
            dif[min(x,y)+1]+=1;
            dif[max(x,y)+k+1]-=1;
            // 2 to min(x,y) = 2 operation
            dif[2]+=2;
            dif[min(x,y)+1]-=2;
            // max(x,y)+k+1 to 2*k = 2 operation
            dif[max(x,y)+k+1]+=2;
            dif[2*k+1]-=2;
            
        }
        int cnt=0;
        int ans=INT64_MAX;;
        for(int i=2;i<=2*k;i++){
            cnt+= dif[i];
            ans=min(ans,cnt);
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