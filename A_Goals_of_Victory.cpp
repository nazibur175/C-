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
        int pos=0;
        int neg=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            if(a[i]>0) pos+=a[i];
            else neg=neg+a[i];
        }
        cout<<-(pos+neg)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}