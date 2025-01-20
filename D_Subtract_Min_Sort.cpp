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
        int f=1;
        for(int i=0;i<n-1;i++){
            int mn = min(a[i],a[i+1]);
            a[i] -= mn;
            a[i+1] -= mn;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f=0;
                break;
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
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