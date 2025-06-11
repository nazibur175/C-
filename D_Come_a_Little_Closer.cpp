#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        multiset<int>xx,yy;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
            xx.insert(x);
            yy.insert(y);
        }
        int ans=1e18;
        for(int i=0;i<n;i++){
            xx.erase(xx.find(v[i].first));
            yy.erase(yy.find(v[i].second));
            int l=0,ll=0;
            int r=0,rr=0;
            if(xx.size()){
                l=*(xx.begin());
                ll=*(xx.rbegin());
            }
            if(yy.size()){
                r=*(yy.begin());
                rr=*(yy.rbegin());
            }
            int left=ll-l+1;
            int right=rr-r+1;
            int temp=left*right;
            if(temp<n) temp+=min(left,right);
            ans=min(ans,temp);
            xx.insert(v[i].first);
            yy.insert(v[i].second);
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