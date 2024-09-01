#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r=n-1;
    int lt=0;
    int rt=0;
    int ans1=0;
    int ans2=0;
    while (l<=r)
    {
        if(lt<=rt) {
            lt+=a[l];
            l++;
            ans1++;
        }
        else {
            rt+=a[r];
            r--;
            ans2++;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}