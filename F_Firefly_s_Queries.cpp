#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+1]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        int pre[n+2]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        for(int i=1;i<=m;i++){
            int l,r;
            cin>>l>>r;
            int left=(l+n-1)/n;
            int right = (r+n-1)/n;
            int cnt = right-left-1;
            int ans=0;
            ans+= cnt * pre[n];
            l=l%n;
            if(l==0)l=n;
            l=n-l+1;
            
            r=r%n;
            if(r==0) r=n;
            //cout<<l<<" "<<r<<endl;
            if(r){
                // start to n + n to existing
                //int temp = right;
                if((n-right+1)>=r){
                    ans+=pre[right+r-1]-pre[right-1];
                }
                else{
                    ans+=pre[n]-pre[right-1];
                    int baki = r - (n-right+1) ;
                    ans+=pre[baki];
                }
            }
            if(l){
                int last_baki= left-1;
                if(last_baki>=l){
                    ans+=pre[last_baki]-pre[last_baki-l];
                }
                else{
                    ans+=pre[last_baki];
                    int lagbe=l-last_baki;
                    ans+=pre[n] - pre[n-lagbe];
                }
            }
        cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}