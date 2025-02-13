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
        int ans= 0;
        for(int i=2;i<=k;i+=2){
            int jabena=i/2;
            int mnin=i;
            int lage = k-i; 
            int mxin= n-lage;
            if(mxin-mnin+1>=2 && jabena!=1) {
                ans=jabena;
                break;
            }
            for(int j=mnin;j<=mxin;j++){
                if(a[j]!=jabena){
                    ans=jabena;
                    break;
                }
            }
            if(ans) break;
        }
        if(ans) cout<<ans<<endl;
        else cout<<(k/2) +1 <<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}