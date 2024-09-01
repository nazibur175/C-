#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>l(n);
        for(int i=0;i<n;i++) cin>>l[i];
        sort(l.rbegin(),l.rend());

        //vector<int>r(n);
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        //sort(r.begin(),r.end());

        vector<int>c(n);
        for(int i=0;i<n;i++) cin>>c[i];
        sort(c.begin(),c.end());

        vector<int>dif;
        for(int i=0;i<n;i++){
            auto it=s.lower_bound(l[i]);
            int val=*it;
            s.erase(it);
            dif.push_back(val-l[i]);
        }
        int ans=0;

        sort(dif.rbegin(),dif.rend());
        for(int i=0;i<n;i++){
            ans+=dif[i]*c[i];
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}   