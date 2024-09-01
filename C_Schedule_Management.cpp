#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++) cin>>v[i];
        map<int,int>mm;
        for(int i=0;i<m;i++){
            mm[v[i]]++;
        }
        int l=0;
        int r=4e5;
        int ans=0;
        while (l<=r)
        {
            int mid=(l+r)/2;
            int parbe=0;
            for(int i=1;i<=n;i++){
                if(mm[i]>=mid) parbe+=mid;
                else {
                    int hr = mid-mm[i];
                    parbe=parbe + mm[i] + (hr/2);
                }
            }
             if(parbe>=m){
                ans=mid;
                //cout<<ans <<">"<<endl;
                r=mid-1;
            }
            else l=mid+1;
            
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