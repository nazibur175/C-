#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        
        int a[n+9];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int yes=1;
        for(int i=1;i<=n-1;i++){
            if(a[i]>a[i+1] && ceil(log2(i)) != floor(log2(i))){
                yes=0;
                break;
            }
        }

        // cout<<"----------"<<endl;
        if(yes==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}