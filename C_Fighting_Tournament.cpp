#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int>v(n+9);
        deque<int>qu;
        for(int i=1;i<=n;i++) {
            cin>>v[i];
            qu.push_back(i);
        }
        vector<int>r[n+9];

        int rnd=1;
        while (1)
        {
            int f=qu.front();
            qu.pop_front();
            int s=qu.front();
            qu.pop_front();
            if(v[f]<v[s]) swap(f,s);
            qu.push_front(f);
            qu.push_back(s);
            r[f].push_back(rnd);
            if(v[f]==n) break;
            rnd++;
        }

        while (q--)
        {
            int i,k;
            cin>>i>>k;
            int ans=upper_bound(r[i].begin(),r[i].end(),k)-r[i].begin();
            if(v[i]==n && r[i].back()<k){
                ans+= k-r[i].back();
            }
            cout<<ans<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}