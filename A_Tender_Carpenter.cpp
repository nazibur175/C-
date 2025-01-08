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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(min(a[i],a[i+1])*2ll > max(a[i],a[i+1])){
                ans++;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(ans==0){
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}