#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9];
    int b[n+9];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        a[i]=a[i]-b[i];
    }
    sort(a,a+n);
    int i=0;
    int j=n-1;
    int ans=0;
    while (i<j)
    {
        if(a[i]+a[j]>0){
            j--;
            continue;
        }
        else {
            ans+=j-i;
            i++;
        }
    }
    int all = (n*(n-1))/2;
    cout<<all-ans<<endl;



}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}