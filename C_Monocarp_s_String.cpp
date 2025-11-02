#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnta=0;
        int cntb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')cnta++;
            else cntb++;
        }
        int a=1;
        int b=-1;
        if(cntb>cnta) swap(a,b);
        if(cnta==cntb){
            cout<<0<<endl;
            continue;
        }
        int presum[n+5]={0};
        int sum=0;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='a') sum+=a;
            else sum+=b;
            presum[i]=sum;
        }
        map<int,int>mp;
        int diff= abs(cnta-cntb);
        int ans=1e18;
        // cout<<diff<<endl;
        // for(int i=1;i<=n;i++){
        //     cout<<presum[i]<<" ";
        // }
        // cout<<endl;
        mp[0]=-1;
        for(int i=1;i<=n;i++){
            if(mp[presum[i]-diff]==-1){
                ans=min(ans,i);
            }
            else if(mp[presum[i]-diff]){
                ans=min(ans,i-mp[presum[i]-diff]);
            }
            mp[presum[i]]=i;
        }
        if(ans==n) cout<<-1<<endl;
        else cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}