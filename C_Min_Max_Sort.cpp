#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int where[n+9]={0};
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            where[x]=i;
        }
        //6---3,4
        //7---4,4
        int l= (n+1)/2;
        int r=(n+2)/2;
        int ans= (n+1)/2;
        while (l>=1 && (l==r || (where[l]<where[l+1] && where[r-1]< where[r])))
        {
            l--;
            r++;
            ans--;
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