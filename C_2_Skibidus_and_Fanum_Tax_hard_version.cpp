#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        int b[m+1];
        for(int i=1;i<=m;i++) cin>>b[i];
        sort(b+1,b+m+1);
        a[0]=-1e18;
        int f=1;
        for(int i=1;i<=n;i++){
            int l=0;
            int r=m+1;
            while (r-l>1)
            {
                int mid = (r+l)/2;
                if((b[mid]-a[i])>=a[i-1]){
                    r=mid;
                }
                else{
                    l=mid;
                }
            }
            if(r==m+1 && a[i]>=a[i-1]){
                continue;
            }
            if(r==m+1){
                f=0;
                break;
            }
            
            int temp = b[r]-a[i];
            if(a[i]>=a[i-1]){
                temp = min(temp,a[i]);
            }
            a[i]=temp;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}