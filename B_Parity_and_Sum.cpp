#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>e;
        vector<int>o;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x%2==0) e.push_back(x);
            else o.push_back(x);
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());

        if(o.size()==0 || e.size()==0) cout<<0<<endl;
        else {
            int ans = e.size();
            int sum=o.back();
            for(int i=0;i<e.size();i++){
                if(sum>e[i]){
                    sum+=e[i];
                }
                else {
                    ans++;
                    break;
                }
            }
            
            cout<<ans<<endl;
        }
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}