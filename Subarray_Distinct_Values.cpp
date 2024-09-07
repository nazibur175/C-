#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r=0;
    map<int,int>m;
    int ans=0;
    while (r<n)
    {
        m[a[r]]++;
        while (m.size()>k)
        {
            m[a[l]]--;
            if(m[a[l]]<=0) m.erase(a[l]);
            l++;
        }
        
        ans+=(r-l+1);
        r++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}