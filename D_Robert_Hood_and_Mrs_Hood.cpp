#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,d,k;
        cin>>n>>d>>k;
        int dif[n+2]={0};
        while (k--)
        {
            int l,r;
            cin>>l>>r;
            dif[max(0ll, l-(d-1))]++;
            dif[r+1]--;
        }
        int mx=-1;
        int mn=INT64_MAX;
        int c=0;
        int ans1=0;
        int ans2=0;
        for(int i=1;i<=n-d+1;i++){
            c+=dif[i];
            if(c>mx){
                ans1=i;
                mx=max(mx,c);
            }
            if(c<mn){
                ans2=i;
                mn=min(mn,c);
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}