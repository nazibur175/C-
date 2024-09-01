#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        // for(auto x:v) cout<<x<<" ";
        // cout<<endl;

        int ans=0;
        if(k>=3) ans=0;
        else if(k==1){
            ans=v[0];
            for(int i=1;i<n;i++){
                ans=min(ans,v[i]-v[i-1]);
            }
        }
        else {

            ans=v[0];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int x=v[j]-v[i];
                    ans=min(ans,x);
                    int in=lower_bound(v.begin(),v.end(),x)-v.begin();
                    if(in<n && v[in]==x) 
                        ans=0;
                    if(in<n)
                        ans=min(ans,abs(x-v[in]));
                    if(in-1>=0)ans=min(ans,abs(x-v[in-1]));
                }
                //ans=min(ans,(v[i]-v[i-1]));
                //cout<<x<<" "<<in<<endl;
            }
            //cout<<ans<<endl;
            
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