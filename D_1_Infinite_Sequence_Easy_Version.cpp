#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,l,r;
int cal(int m,int pre[]){
    if(m<=n) return pre[m];
    int half=m/2;
    if(m%2==0 && n%2==0){
        return (cal(half,pre)^cal((n+1)/2,pre)^pre[n]);
    }
    else if(m%2==0 && n%2==1){
        return (cal(half,pre)^pre[n]);
    }
    else if(m%2==1 && n%2==0){ 
        return  cal((n+1)/2,pre)^pre[n];
    }
    else return pre[n];

}
void solve(){
    test{
        cin>>n>>l>>r;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pre[n+1]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]^a[i];
        }
        cout<<(cal(l,pre)^cal(l-1,pre))<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}