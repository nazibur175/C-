#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int ok(int n){
    int f=0;
    while (n)
    {
        if(n%10==7){
            f=1;
            break;
        }
        n/=10;
    }
    return f;
    
}
void solve(){
    test{
        int n;
        cin>>n;
        int mul=0;
        int ans=100;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(ok(n+(j*mul)))
                ans = min(ans, j);
            }
            mul=(mul*10)+9;
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