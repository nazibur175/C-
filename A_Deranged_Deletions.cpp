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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        int f=1;
        for(int i=0;i<n-1;i++){
            if(v[i].second> v[i+1].second){
                f=0;
                cout<<"YES\n";
                cout<<2<<"\n";
                cout<<v[i+1].first<<" "<<v[i].first<<"\n";
                break;
            }
        }
        if(f){
            cout<<"NO\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}