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
        int vis[n+9]={0};
        for(int i=1;i<n;i++){
            cin>>a[i];
        }

        int target=0;
        int x=0;
        // difference kotobar occur
        int diffcnt=0;
        for(int i=1;i<n;i++){
            int dif=abs(a[i]-a[i-1]);
            if(dif<=n){
                if(vis[dif]){
                    x+=dif;
                    diffcnt++;
                }
                vis[dif]++;
            }
            else{
                target+=dif;
                //cout<<i<<" "<<target<<endl;
            }
        }

        int sum=0;
        int miscount=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==0) {
                miscount++;
                sum+=i;
            }
        }

        if(diffcnt>1) cout<<"NO"<<endl;
        else if(diffcnt==0 && target==0) cout<<"YES"<<endl;
        else if(miscount>2) cout<<"NO"<<endl;
        else if(sum==x || sum==target) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}