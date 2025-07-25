#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int ans=0;
        while(n--){
            
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a==c && b==d){
                continue;
            }
            else if(a>c && b>d){
                ans+=a-c;
                ans+=c+b-d;
            }
            else if(a>c && b<=d){
                ans+=a-c;
            }
            else if(a<=c && b>d){
                ans+=a+b-d;
            }
            else continue;
            
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}