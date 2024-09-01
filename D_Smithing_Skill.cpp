#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<ll,ll>
#define test int t; cin>>t; while(t--)
bool cmp(pii p, pii q){
    ll d1 = p.first - p.second;
    ll d2 = q.first - q.second;

    if(d1<d2) return true;
    else if(d2<d1) return false;
    else if(p.first<q.first) return true;
    else return false;
}

void solve(){
    ll n,m; cin>>n>>m;
    vector<pii> v(n);
    vector<ll> c(m);
    for(ll i=0; i<n; i++) cin>>v[i].first;
    for(ll i=0; i<n; i++) cin>>v[i].second;
    for(ll i=0; i<m; i++) cin>>c[i];
    sort(v.begin(),v.end(), cmp);
    
    map<ll, ll, greater<ll>> mp;
    for(auto x : c) mp[x]++;

    ll ans = 0;
    for(ll i=0; i<n; i++){
        while(1){
            auto p = *mp.begin();
            ll val = p.first;
            ll cnt = p.second;

            if(val<v[i].first) break;

            ll diff = (v[i].first-v[i].second);
            ll x = (val - v[i].first)/diff;
            x = abs(x);
            x++;
            ans+=(2ll*x*cnt);
            val = val - diff*x;
            mp[val]+=cnt;
            mp.erase(mp.begin());
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    solve();
    return 0;
}