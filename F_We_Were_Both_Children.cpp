#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9]={0};
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n) {
                a[x]++;
                s.insert(x);
            }
        }
    int b[n+9]={0};
        for(auto x:s){
            for(int i=x;i<=n;i+=x){
                b[i]+=a[x];
            }
        }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=max(ans,b[i]);
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