#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=4e5+5;
int vis[N];
vector<int>a,b;
int n;
int cal(int pos){
    if(pos<0) return 0;
    if(vis[pos]){
        return cal(pos-1);
    }
    vis[pos]=1;
    
    int x=cal(b[pos]);
    int y=cal(pos-1) + a[pos];
    return max(x,y);
}
void solve(){
    test{
        memset(vis,0,sizeof(vis));
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        b.resize(n);
        for(int i=0;i<n;i++) {
            cin>>b[i];
            b[i]--;
        }
        cout<<cal(0)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}