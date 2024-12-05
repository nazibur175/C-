#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        s='*'+s;
        int suf0[n+2]={0};
        int suf1[n+2]={0};
        for(int i=n;i>=1;i--){
            suf0[i]=suf0[i+1]+(s[i]=='0');
            suf1[i]=suf1[i+1]+(s[i]=='1');
        }
        int score0=0,score1=0;
        int group=0;
        int f=0;
        int cnt0=0,cnt1=0;
        for(int i=1;i<=n;i++){
            if(suf0[i]>=suf1[i] || i==1){
                if(s[i]=='0') cnt0++;
                else cnt1++;
                continue;
            }
            else{
                score0+= (cnt0*group);
                score1+= (cnt1*group);
                cnt0=0;
                cnt1=0;
                group++;
                //cout<<i<<endl;
                //cout<<suf0[i]<<" "<<suf1[i]<<endl;
            }
            int pos_score0 = score0 + (suf0[i]*group);
            int pos_score1 = score1 + (suf1[i]*group);
            int score = pos_score1 - pos_score0;
            if(score>=k){
                f=1;
                break;
            }
            
        }
        if(f==0) cout<<"-1"<<endl;
        else cout<<group+1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}