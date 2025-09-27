#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int phi(int n){
    int res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            res-=res/i;
        }
    }
    if(n>1) res-=res/n;
    return res;
}
void solve(){
    int n;
    while(cin>>n){
        int cnt=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if((n/i)*(n/i)!=n) cnt++;
            }
        }
        cout<<max(0ll,n-phi(n)-cnt-1)<<endl;
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}