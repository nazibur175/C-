#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y,k;
        cin>>x>>y>>k;
        vector<pair<int,int>>ans;
        if(k%2==0){
            if(x==0 && y==0){
                for(int i=1;i<=k/2;i++){
                    ans.push_back({i,i});
                    ans.push_back({-1*i,-1*i});
                }
            }
            else{
                ans.push_back({0,0});
                ans.push_back({x*k,y*k});
                k=k-2;
                for(int i=1;i<=k/2;i++){
                    ans.push_back({i+100,i+100});
                    ans.push_back({-1*(i+100),-1*(i+100)});
                }
            }
        }
        else {
            if(x==0 && y==0){
                ans.push_back({0,0});
            }
            else {
                ans.push_back({x*k,y*k});
            }
                
                k--;
                for(int i=1;i<=k/2;i++){
                    ans.push_back({i+100,i+100});
                    ans.push_back({-1*(i+100),-1*(i+100)});
                }
            }
        for(auto x:ans) cout<<x.first<<" "<<x.second<<endl;
            
        }
    }


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}