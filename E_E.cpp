#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e4;
void solve(){
    test{
        int n;
        cin>>n;
        int a[N]={0};
        for(int i=0;i<n;i++)cin>>a[i];
        int m;
        cin>>m;
        int b[N]={0};
        for(int i=0;i<m;i++)cin>>b[i];

        int ans[n+m]={0};
        if(a[0]==0) ans[0]=0;
        else 
        ans[0]=b[0]/a[0];
        for(int i=1;i<m;i++){
            int lage=b[i];
            int ache=0;
            for(int j=1;j<=i;j++){
                ache+=a[j]*ans[i-j];
            }
            lage-=ache;
            if(a[0]==0){
                ans[i]=lage;
            }
            else 
            ans[i]=lage/a[0];
        }
        while(ans[m-1]==0){
            m--;
        }
        cout<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<ans[i];
            if(i!=m-1)cout<<" ";
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