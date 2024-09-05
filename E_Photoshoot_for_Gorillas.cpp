#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int nn;
        cin>>nn;
        vector<int>vv;
        for(int i=1;i<=nn;i++){
            int x;
            cin>>x;
            vv.push_back(x);
        }
        sort(vv.rbegin(),vv.rend());
        int a[n+1][m+1]={0};
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                int xx= min(i,n-k)-max(-1ll,i-k);
                int yy= min(j,m-k)-max(-1ll,j-k);

                int total =0;
                total += (xx*yy);
                a[i][j]= total;
                v.push_back(a[i][j]);
                //
                //cout<<a[i][j]<<" ";
            }
            //
            //cout<<endl;
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0;i<nn;i++){
            ans+= (vv[i]*v[i]) ;
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