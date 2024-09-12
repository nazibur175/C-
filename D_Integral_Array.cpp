#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,c;
        cin>>n>>c;
        vector<int>cnt(c+c+1);
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            cnt[x]++;
        }
        vector<int>presum(c+c+1);
        for(int i=1;i<=2*c;i++){
            presum[i]=presum[i-1]+cnt[i];
        }
        int ans=1;
        for(int i=1;i<=c;i++){
            if(cnt[i]){
                for(int j=i;j+i<=2*c;j+=i){
                    int y=j;
                    int x=j+i;
                    // x/y = r
                    // x=j+i-1
                    // y=j
                    // r=j/i
                    // y < x
                    if((presum[j+i-1]-presum[j-1])>0  && cnt[j/i]==0){
                        ans=0;
                        break;
                    }
                }
            }
        }
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}