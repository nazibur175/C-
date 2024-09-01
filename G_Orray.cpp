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
        for(int i=0;i<n;i++) cin>>a[i];
        //sort(a,a+n,greater<int>());
        vector<int>ans;
        int cur=0;
        int vis[n]={0};
        for(int i=1;i<=min(31LL,n);i++){
        int temp=0;
        int in=0;
            for(int j=0;j<n;j++){
                if(vis[j]==0 && (cur|a[j])>temp){
                    in=j;
                    temp= cur|a[j];
                }
            }
            cur|=a[in];
            vis[in]=1;
            ans.push_back(a[in]);
        }
        for(auto x:ans) cout<<x<<" ";
        for(int i=0;i<n;i++){
            if(vis[i]==0) cout<<a[i]<<" ";
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