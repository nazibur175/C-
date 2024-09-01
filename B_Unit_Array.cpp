#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int p=0;
        int ne=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>0) p++;
            else ne++;
        }
        int ans=0;
        while (p<ne || ne%2)
        {
            if(ne%2==0){
                ne-=2;
                p+=2;
                ans+=2;
            }
            else {
                ne-=1;
                p+=1;
                ans+=1;
            }
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