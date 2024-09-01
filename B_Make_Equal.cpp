#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        int val = sum/n;
        int f=1;
        int cur=0;
        for(int i=0;i<n;i++){
            if(a[i]==val) continue;
            else if(a[i]<val) cur-=val-a[i];
            else cur+=a[i]-val;
            if(cur<0) {
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}