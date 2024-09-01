#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int nn=7;
    int a[nn+9];
    for(int i=1;i<=nn;i++){
        cin>>a[i];
    }
    int temp=0;
    int ans=0;
    while (1)
    {
        for(int i=1;i<=nn;i++){
            temp+=a[i];
            if(temp>=n){
                ans=i;
                break;
            }
        }
        if(ans) break;
    }
    cout<<ans<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}