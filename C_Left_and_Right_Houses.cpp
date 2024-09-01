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
        int prezero[n+5]={0};
        int postone[n+5]={0};
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zero++;
            prezero[i+1]=zero;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') one++;
            postone[i+1]=one;
        }
        
        int ans = INT64_MAX;
        int in=0;
        for(int i=0;i<=n+1;i++){
            if((i-prezero[i])<=prezero[i]  &&  (n-i)-postone[i+1]<= postone[i+1]){
                int temp= abs(n-2*i);
                if(temp<ans){
                ans=min(ans,abs(n-2*i));
                in = i;
                }
            }
        }
        cout<<in<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}