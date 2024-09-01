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
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int va=0;
        int vb=0;
        int sp=0;
        int sn=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                va+=a[i];
            }
            else if(a[i]<b[i]) vb+=b[i];
            else if(a[i]<0) sn++;
            else if(a[i]>0) sp++;
            //else continue;
        }
        while (sp--)
        {
            if(va<vb) va++;
            else vb++;
        }
        while (sn--)
        {
            if(va>vb) va--;
            else vb--;
        }
        cout<<min(va,vb)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}