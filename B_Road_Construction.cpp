#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>n>>m;
    map<int,int>mm;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mm[x]++;
        mm[y]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!mm[i])
            {
                ans=i;
                break;
            }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i==ans)continue;
        else cout<<i<<" "<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}