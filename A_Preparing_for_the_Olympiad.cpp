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
        int b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        b[n]=0;
        int suma=0;
        int sumb=0;
        for(int i=0;i<n;i++){
            int x = a[i]-b[i+1];
            if(x>0) suma+=x;
            //else sumb += (x*(-1));
        }
        //int ans= max(suma,sumb);
        cout<<suma<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}