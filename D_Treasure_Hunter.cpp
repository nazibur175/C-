#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];

    // int diff[n+5]={0};
    map<pair<int,int>,int>m;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        int d1=a[i]/2;
        int d2=d1/2;
        int m1=a[i]*2;
        int m2=m1*2;
        int nor=a[i];
        int d1m1=d1*2;
        if(m[{d1,1}]){
            // diff[m[{d1,1}]]++;
            // diff[i+1]--;
            v.push_back({m[{d1,1ll}],i});
        }
        if(m[{d1,0ll}]){
            // diff[m[{d1,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{d1,0ll}],i});

        }
        if(m[{d2,0ll}]){
            // diff[m[{d2,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{d2,0ll}],i});
        }
        if(m[{m1,1ll}]){
            // diff[m[{m1,1}]]++;
            // diff[i+1]--;
            v.push_back({m[{m1,1ll}],i});

        }
        if(m[{m1,0ll}]){
            // diff[m[{m1,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{m1,0ll}],i});

        }
        if(m[{m2,0ll}]){
            // diff[m[{m2,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{m2,0ll}],i});

        }
        if(m[{d1m1,0ll}]){
            // diff[m[{m2,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{d1m1,0ll}],i});

        }
        if(m[{nor,0ll}]){
            // diff[m[{nor,0}]]++;
            // diff[i+1]--;
            v.push_back({m[{nor,0ll}],i});

        }
        if(m[{nor,1ll}]){
            // diff[m[{nor,1}]]++;
            // diff[i+1]--;
            v.push_back({m[{nor,1ll}],i});

        }
        if(m[{nor,2ll}]){
            // diff[m[{nor,2}]]++;
            // diff[i+1]--;
            v.push_back({m[{nor,2ll}],i});

        }
        m[{m1,1ll}]=i;
        m[{m2,2ll}]=i;
        m[{d1,1ll}]=i;
        m[{d2,2ll}]=i;
        m[{d1m1,2ll}]=i;
        m[{nor,0ll}]=i;
    }
    sort(v.begin(),v.end());
    int nn=v.size();
    int mnR[nn+1]={0};
    for(int i=nn-1;i>=0;i--){
        if(i==nn-1){
            mnR[i]=v[i].second;
        }
        else mnR[i]=min(mnR[i+1],v[i].second);
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(v.empty()) {
            cout<<"NO"<<endl;
            continue;
        }
        int idx=lower_bound(v.begin(),v.end(),make_pair(l,(long long)INT64_MIN))-v.begin();
        if(idx>=nn) cout<<"NO"<<endl;
        else {
            if(mnR[idx]<=r){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}