#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,b,c;
const int inf = 1e18;
int ok(int i){
    // overflow handle
    if((i-1)>inf/b) return 0;
    int val = c+(i-1)*b;
    if(val<n) return 1;
    return 0;
}
void solve(){
    test{
        
        cin>>n>>b>>c;
        if(b==0){
            if(c<n){
                int pos= c+2;
                if(pos>=n) cout<<n-1<<endl;
                else cout<<"-1"<<endl; 
            }
            else cout<<n<<endl;
        }
        else {
            int l=0;
            int r=1e18+9;
            int ans=0;
            while (r-l>1)
            {
                int mid = (l+r)/2;
                if(ok(mid)){
                    l=mid;
                }
                else{
                    r=mid;
                } 
            }
            cout<<n-l<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}