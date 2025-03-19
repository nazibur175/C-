#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int> a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        int cnt[n+1]={0};
        int in=0;
        for(int i=1;i<n;i++){
            while (in<m && a[in]<i){
                in++;
            }
            if(in==m){
                cnt[i]=0;
            }
            else {
                cnt[i]=m-in;
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
            int x=i;
            int y=n-i;
            if(x<=y){
                ans+=(cnt[x]-1)*(cnt[y]);
            }
            else{
                ans+=cnt[x]*(cnt[y]-1);
            }
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