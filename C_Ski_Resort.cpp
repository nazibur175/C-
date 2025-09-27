#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,q;
        cin>>n>>k>>q;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>q){
                if(cnt>=k){
                    cnt-=k-1;
                    ans+=((cnt*(cnt+1))/2);
                }
                cnt=0;
                continue;
            }
            cnt++;
        }
        
        if(cnt>=k){
            cnt-=k-1;
            //cout<<cnt<<"Here\n";
            ans+=((cnt*(cnt+1))/2);
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}