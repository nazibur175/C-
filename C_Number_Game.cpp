#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int k=1;k<=n;k++){
            multiset<int>s(v.begin(),v.end());
            for(int i=0;i<k;i++){
                auto it = s.upper_bound(k-i);
                if(it==s.begin()) break;
                s.erase(--it);
                if(!s.empty()){
                int x=*s.begin();
                s.erase(s.begin());
                s.insert(k-i+x);
                }
            }

        if(s.size()+k==n) ans=k;
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