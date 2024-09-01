#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }

        int f=0;
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(b[i]==a[i]) continue;
            else {
                f=1;
                break;
            }
        }
        if(f==0) cout<<"YES"<<endl;
        else if(k>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}