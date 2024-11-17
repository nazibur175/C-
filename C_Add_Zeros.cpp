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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x=a[i]-(n+1-(i+1));
            if(x>=0)v.push_back({x,i});
        }

        sort(v.rbegin(),v.rend());
        for(auto x:v){
            m[x.first]=max(m[x.first],m[x.first+x.second]+x.second);
        }
        cout<<m[0]+n<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}