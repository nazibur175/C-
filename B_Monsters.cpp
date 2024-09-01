#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x=x%k;
            if(x==0)x=k;
            v.push_back({x,-i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<(-1*v[i].second)+1<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}