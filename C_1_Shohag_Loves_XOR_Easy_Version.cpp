#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int leftmostsetbit(int n){
    int m=0;
    while(n>0){
        m++;
        n=n>>1;
    }
    return m;
}
void solve(){
    test{
        int x,m;
        cin>>x>>m;
        int cnt = leftmostsetbit(x);
        int ans = 0;
        int mx = (1<<cnt)-1;
        mx = min(mx,m);
        map<int,int>mp;
        for(int i=1;i<=mx;i++){
             int temp = (x^i);
             if(temp!=0 && (x%temp==0 || i%temp==0)  && mp[i]==0){
                     ans++;
                     mp[i]=1;
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