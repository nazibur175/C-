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
        int pre_sum[2*n+1]={0};
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
            if(x==y){
                pre_sum[x]++;
            }
        }
        int pre_cal[2*n+1]={0};
        for(int i=1;i<=2*n;i++){
            pre_cal[i]=pre_cal[i-1]+(pre_sum[i]>0?1:0);
        }
        for(auto x:v){
            int l=x.first;
            int r=x.second;
            int ans=pre_cal[r]-pre_cal[l-1];
            if(ans<(r-l+1)){
                cout<<1;
            }
            else if(l==r && pre_sum[l]==1){
                cout<<1;
            }
            else{
                cout<<0;
            }
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