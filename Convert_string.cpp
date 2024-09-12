#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cnt(int l,int n){
    int c=0;
    if(l%2==0){
        int pre = (l-1)/2;
        int all = n/2;
        c= all-pre;
    }
    else {
        int pre = l/2;
        int all = (n+1)/2;
        c = all - pre;
    }
    return c;
}
void solve(){

    
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zero =0 ;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zero++;
            else one++;
        }
        int ans=0;
        if(zero==one){
            ans= cnt(zero,n);
        }
        else{
            if(zero%2 == one%2){
                ans = cnt(min(zero,one),n);
            }
            else {
                ans = cnt(zero,n);
                ans+= cnt(one,n);
            }
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