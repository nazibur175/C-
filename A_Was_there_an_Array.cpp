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
        for(int i=0;i<n-2;i++){
            cin>>a[i];
        }
        int f=1;
        for(int i=0;i<n-4;i++){
                if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
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