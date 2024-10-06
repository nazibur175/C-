#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+1;
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            m[v[i]]++;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            int temp=i-x;

            if( m[i]==0 && temp<0){
                ans=i;
                break;
            }
            else if(m[i]==0 && m[temp]<=1){
                ans=i;
                break;
            }
            else {
                int xx=0;
                if(temp>=0)
                xx=m[temp]-1;
                m[i]+=xx;
            }

            //cout<<m[i]<<endl;
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