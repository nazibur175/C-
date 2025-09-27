#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int ans=100;
        for(int i=0;i<=30;i++){
            if(b+i==1)continue;
            int cnt=i;
            int x=b+i;
            int temp=a;
            while(temp>0){
                temp/=x;
                cnt++;
            }
            ans=min(ans,cnt);
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