#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int sum, m;
        cin>>sum>>m;
        int ans=0;
        if(sum&m) ans++;
        vector<int>temp;
        for(int i=61;i>=0;i--){
            int x = (1ll<<i);
            if(m&x){
                for(auto it:temp){
                    // ans+=pow(2,it-i);
                    int temp = pow(2,it-i);
                    ans=max(ans,temp);
                }
                temp.clear();
            }
            bool a=m&x;
            bool b = sum&x;
            if(!a && b){
                temp.push_back(i);
            }
        }
        if(temp.size()) cout<<-1<<endl;
        else 
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}