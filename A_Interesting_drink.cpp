#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        int in= upper_bound(a,a+n,x)-a;
        cout<<in<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}