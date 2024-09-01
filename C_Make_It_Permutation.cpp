#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define ll long long
using namespace std;
void solve()
{
    ll i,j,n,c,d;
    cin>>n>>c>>d;
    ll a[n];
    set<ll>s;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    vector<ll>v;
    for(auto it:s)
        v.pb(it);

    sort(v.begin(),v.end());
    ll ans=n*c+d;
    for(i=0;i<v.size();i++)
    {
        ll x=((n-i-1)*c)+((v[i]-i-1)*d);
        ans=min(ans,x);
    }
    cout<<ans<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


