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
        for(int i=0;i<n;i++)cin>>a[i];
        if(n<=2) {
            cout<<"-1"<<endl;
            continue;
        }
        else {
            for(int i=0;i<n;i++) {
                if(a[i]==1) cout<<"3 ";
                else if(a[i]==3) cout<<"1 ";
                else cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}