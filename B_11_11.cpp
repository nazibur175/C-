#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int val=i;
        if(val%11==0){
            val=val/11;
        }
        if(i>9 && i%11!=0) continue;
        while (val<=a[i])
        {
            ans++;
            //cout<<i<<" "<<val<<endl;
            val=val*11;
        }
        
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}   