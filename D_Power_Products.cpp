#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
map<vector<pair<int,int>>,int>m;
void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    
    for(int ii=0;ii<n;ii++){
        int x;
        cin>>x;
        vector<pair<int,int>>v_ache,v_need;
       
        for(int i=2; i*i<=x;i++){
            int cnt=0;
            while (x%i==0)
            {
                cnt++;
                x/=i;
            }
            if(cnt%k){
                v_ache.push_back({i,cnt%k});
                v_need.push_back({i,k-(cnt%k)});
            }
        }
        if(x>1){
            v_ache.push_back({x,1});
            v_need.push_back({x,k-1});
        }
        ans+=m[v_need];
        m[v_ache]++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}