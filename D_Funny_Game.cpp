#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++) cin>>a[i];
        map<int,int>f;
        vector<pair<int,int>>ans;
        for(int x=n-1;x>=1;x--){
            map<int,int>m;
            for(int i=1;i<=n;i++){
                if(!f[i]){
                    int temp=a[i]%x;
                    if(m[temp]){
                        f[i]=1;
                        ans.push_back({m[temp],i});
                        break;
                    }
                    m[temp]=i;
                }
            }
        }
        cout<<"YES"<<endl;
        reverse(ans.begin(),ans.end());
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}