#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    int c=0;
    while (i<=j)
    {
        if(a[i]+a[j]<=x){
            c++;
            i++;
            j--;
        }
        else {
            c++;
            j--;
        }
    }
    cout<<c<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}