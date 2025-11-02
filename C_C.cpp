#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool cmp(pair<int,int>&x, pair<int,int>&y){
    return (x.first - x.second) > (y.first - y.second);
}
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>b_boro, a_boro;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(y>x){
                b_boro.push_back({y,x});
            }
            else a_boro.push_back({y,x});
        }

        sort(b_boro.begin(),b_boro.end(),cmp);
        int cur_house=m;
        int ans=0;
        int i=0;
        int bosaichi=0;
        pair<int,int>last;
        for(;i<b_boro.size();i++){
            int bosainai= n-(bosaichi+1);
            if((cur_house-2) >= bosainai){
                ans+=b_boro[i].first;
                bosaichi++;
                cur_house-=2;
                last={b_boro[i].first,b_boro[i].second};
            }
            else break;
        }
        if((n-bosaichi)==1){
            pair<int,int>p;
            //i=bosaichi;
            // for(;i<b_boro.size();i++){
            //     ans+=b_boro[i].first;
            // }
            // for(auto x:a_boro){
            //     ans+=x.first;
            // }
            if(a_boro.size()==1){
                p=a_boro.front();
            }
            else {
                p=b_boro.back();
            }
            // cout<<ans<<endl;
            // cout<<last.first<<" "<<last.second<<endl;
            // cout<<p.first<<" "<<p.second<<endl;
            ans = max((ans - last.first + last.second + p.second), ans + p.first);
            
        }
        else {
            i=bosaichi;
            for(;i<b_boro.size();i++){
                ans+=b_boro[i].second;
            }
            for(auto x:a_boro){
                ans+=x.second;
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