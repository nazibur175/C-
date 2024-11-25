#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int suf[n+1]={0};
    int pre[n+1]={0};
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            pre[i+1]=pre[i]+1;
        }
        else{
            pre[i+1]=0;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='2'){
            suf[i]=suf[i+1]+1;
        }
        else{
            suf[i]=0;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='/'){
            ans = max(ans, (2*min(pre[i], suf[i+1])+1));
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}