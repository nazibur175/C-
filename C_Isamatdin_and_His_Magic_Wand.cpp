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
        int ev=0;
        int od=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2) od++;
            else ev++;
        }
        if(ev && od){
            sort(a,a+n);
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
                else cout<<endl;
            }
        }
        else {
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
                else cout<<endl;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}