#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(v.size()==0){
                v.push_back(x);
            }
            else{
                if(v.back()!=x){
                    v.push_back(x);
                }
            }
        }
        
        vector<pair<int,int>>vv;
        for(int i=0;i<v.size();i++){
            vv.push_back({v[i],i});
        }
        sort(vv.rbegin(),vv.rend());
        // for(auto x:vv){
        //     cout<<x.first<<" "<<" "<<x.second<<endl;
        // }
        int ans=0;
        int check[n+1]={0};
        for(int i=0;i<vv.size();i++){
            int prepos=vv[i].second-1;
            if(prepos<0){
                prepos=0;
            }
            int post=vv[i].second+1;
            if(post>=vv.size()){
                post=vv.size()-1;
            }
            if(check[prepos]==1 || check[post]==1){
                check[vv[i].second]=1;
            }
            else{
                ans++;
                check[vv[i].second]=1;
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