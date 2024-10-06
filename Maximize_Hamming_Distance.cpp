#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int cnt0[n]={0};
        int cnt1[n]={0};
        int cntq[n]={0};
        while (m--)
        {
            string s;
            cin>>s;
            for(int i=0;i<n;i++){
                if(s[i]=='0') cnt0[i]++;
                else if(s[i]=='1') cnt1[i]++;
                else cntq[i]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int x=cnt0[i];
            int y=cnt1[i];
            int q=cntq[i];

            int mn= min(x,y);
            int mx=max(x,y);
            int dif= mx-mn;
            
            int xx = min(q,dif);
            mn+=xx;


            q-=xx;
            if(q){
                int aa = (q+1)/2;
                int bb = q/2;
                mn+=aa;
                mx+=bb;
            }
            ans+= (mn*mx);
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