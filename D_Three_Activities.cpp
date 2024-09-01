#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>a,b,c;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            b.push_back({x,i});
        }
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            c.push_back({x,i});
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        reverse(c.begin(),c.end());
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    set<int>s;
                    s.insert(a[i].second);
                    s.insert(b[j].second);
                    s.insert(c[k].second);
                    if(s.size()==3){
                        ans=max(ans,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
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