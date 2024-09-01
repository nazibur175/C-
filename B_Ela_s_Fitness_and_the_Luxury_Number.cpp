#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int root(int n){
    int l=1;
    int r=1e9;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(mid*mid>n) r=mid-1;
        else l=mid+1;
    }
    return r;
}
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int x=root(a);
        int y=root(b);
        int ans=max(0LL,(y-x-1)*3);
        //cout<<x<<" "<<y<<endl;
        for(int i=0;i<3;i++){
            if(x*(x+i)>=a && x*(x+i)<=b) ans++;
            if(x!=y)
            if(y*(y+i)>=a && y*(y+i)<=b) ans++;
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