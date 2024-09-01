#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int>ans(n+9);
        iota(ans.begin(),ans.end(),0);
        if(n%x) {
            cout<<"-1"<<endl;
            continue;
        }
        ans[1]=x;
        ans[n]=1;
        while (x<n)
        {
            for(int i=2*x;i<=n;i+=x){
                if(n%i==0){
                    ans[x]=i;
                    x=i;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
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