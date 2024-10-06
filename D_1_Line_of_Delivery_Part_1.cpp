#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,g;
        cin>>n>>g;
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        //for(auto x:v) cout<<x<<" ";
        //cout<<endl;

        int in1 = lower_bound(v.begin(),v.end(),g)-v.begin();
        int in2 = in1-1;
        //cout<<g<<"= "<<in1<<" "<<in2<<endl;
        int dis=INT64_MAX;
        int ansin=0;
         if(in1==1){
             dis = abs(g-v[in1]);
             ansin=1;
         }
         else if(in2==n){
            dis = abs(g-v.back());
            ansin=n;
         }
         else {
            if(abs(g-v[in1])>abs(g-v[in2])){
                ansin = in2;
                dis = abs(g-v[in2]);
            }
            else {
                ansin=in1;
                dis= abs(g-v[in1]);
            }

         }
         int ans = n-ansin+1;
         cout<<"Case #"<<tt<<": ";
         cout<<ans<<" "<<dis<<endl;
        //if(abs(dis-v[in1]))

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
freopen("meta.in", "r", stdin);
freopen("meta.out", "w", stdout);
solve();

}