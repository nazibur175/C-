#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int sum;
        cin>>sum;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<(1<<n);i++){
            int s=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    s+=a[j];
                }
            }
            if(s==sum) ans|=1;
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}