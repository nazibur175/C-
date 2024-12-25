#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int pashapashi(int n,int x,int y){
    int diff=abs(x-y);
    if(diff==1) return 1;
    else if(x==1 && y==n) return 1;
    else if(x==n && y==1) return 1;
    else return 0;
}
int pre(int n,int x){
    if(x==1) return n;
    else return x-1;
}
int post(int n,int x){
    if(x==n) return 1;
    else return x+1;
}
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        int ans[n+1]={0};
        if(n%2==1){
            for(int i=2;i<=n;i+=2){
                ans[i]=1;
            }
            ans[n]=2;
        }
        else{
            for(int i=2;i<=n;i+=2){
                ans[i]=1;
            }
        }
        if(!pashapashi(n,x,y) && ans[x]==ans[y]){
            int p=pre(n,x);
            int q=post(n,x);
            if((ans[p]!=2 && ans[q]!=2 )){
                ans[x]=2;
            }
            else {
                ans[y]=2;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i];
            if(i!=n) cout<<" ";
        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}