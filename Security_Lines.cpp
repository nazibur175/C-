#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(i==1) continue;
            if(a[i]>=i-1){
                a[i]++;
            }
            else a[i]=i-1;
        }
        sort(a+1,a+n+1);
        cout<<a[1]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}