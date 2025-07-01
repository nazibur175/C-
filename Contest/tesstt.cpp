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
        int total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                total++;
            }
        }
        if(total<=k){
            cout<<"Alice\n";
            continue;
        }
        if(k*k>n){
            cout<<"Alice\n";
            continue;
        }
        int cnt1=0;
        for(int i=k;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
                s[i]='0';
            }
        }
        for(int i=n-1-k;i>=0;i--){
            if(s[i]=='1'){
                cnt1++;
                s[i]='0';
            }
        }
        if(cnt1>k){
            cout<<"Bob\n";
            continue;
        }
        int prefix[n+1]={0};
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i];
            if(s[i]=='1'){
                prefix[i+1]++;
            }
        }
        int mn1=INT_MAX;
        for(int i=0;i<=n-k;i++){
            mn1=min(mn1,prefix[i+k]-prefix[i]);
        }
        if(mn1==0){
            cout<<"Bob\n";
        }
        else{
            cout<<"Alice\n";
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}