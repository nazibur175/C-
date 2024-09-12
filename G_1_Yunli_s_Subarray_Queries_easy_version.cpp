#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,q;
        cin>>n>>k>>q;
        int a[n+1];
        int ans[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]=a[i]-i;
        }
        map<int,int>m;
        multiset<int>s;
        for(int i=0;i<n;i++) s.insert(0);
        for(int i=1;i<k;i++){
            s.erase(s.find(m[a[i]]));
            m[a[i]]++;
            s.insert(m[a[i]]);
        }
        for(int i=k;i<=n;i++){
            s.erase(s.find(m[a[i]]));
            m[a[i]]++;
            s.insert(m[a[i]]);
            auto it=s.end();
            it--;
            int mx=*it;
            mx=k-mx;
            int prev=i-k+1;
            ans[prev]=mx;
            s.erase(s.find(m[a[prev]]));
            m[a[prev]]--;
            s.insert(m[a[prev]]);
        }
        
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<ans[l]<<endl;
        }
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}