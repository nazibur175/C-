#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int mx_cnt=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
                mx_cnt=max(mx_cnt,cnt);
            }
            else{
                cnt=0;
            }
        }
        int temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                temp++;
            }
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                temp++;
            }
            else break;
        }
        temp=min(temp,n);
        mx_cnt=max(mx_cnt,temp);
        if(temp==n){
            cout<<n*n<<"\n";
            continue;
        }
        int ans=mx_cnt;
        for(int i=1;i<=mx_cnt;i++){
            ans=max(ans,i*(mx_cnt-i+1));
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