#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal(int k,int a,int b,int x,int y){
    int ans=0;
    ans+=max(0ll,(k-a+x)/x);
    k-=ans*x;
    ans+=max(0ll,(k-b+y)/y);
    return ans;
}
void solve(){
    test{
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        cout<<max(cal(k,a,b,x,y),cal(k,b,a,y,x))<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}