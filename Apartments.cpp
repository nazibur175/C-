#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int b[m+9];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b,b+m);

    int i=0,j=0;
    int ans =0;
    while (i<n && j<m)
    {
        if(a[i]-k<=b[j] && a[i]+k>=b[j]){
            ans++;
            i++;
            j++;
        }
        else if(a[i]-k>b[j]){
            j++;
        }
        else {
            i++;
        }

    }
    cout<<ans<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}