#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        vector<pair<int,int>>v;
        vector<int>dis;
        for(int i=0;i<n;i++){
            int val = a[i]-b[i];
            v.push_back({val,i+1});
            dis.push_back(val);
        }
        sort(dis.begin(),dis.end());
        //sort(v.begin(),v.end());
        vector<int>ans;
        for(auto x:v){
            int  in=(upper_bound(dis.begin(),dis.end(),x.first)-dis.begin())-1;
             if(in>=n-1){
                 ans.push_back(x.second);
             }
        }
        cout<<ans.size()<<endl;
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}