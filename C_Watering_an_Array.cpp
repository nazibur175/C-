#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,d;
        cin>>n>>k>>d;
        int a[n+9]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int v[k+9]={0};
        for(int i=1;i<=k;i++){
            cin>>v[i];
        }
        int ans=0;

        int x=1;
        for(int i=1;i<=10001 && i<=d;i++){
            
            int equal=0;
            for(int j=1;j<=n;j++){
                if(a[j]==j) equal++;
            }

            if(x>k) x=1;

            int max_in=v[x];

            for(int j=1;j<=max_in;j++){
                a[j]=a[j]+1;
            }
            int extraday = d-(i);
            int cur= equal + extraday/2 ;
            ans=max(ans,cur);
            x++;
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