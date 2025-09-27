#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int sum=0;
        int mn=1000;
        int neg=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                if(x<0)neg++;
                x=abs(x);
                sum+=x;
                mn=min(mn,x);
            }
        }
        //cout<<sum<<" "<<mn<<" "<<neg<<endl;
        if(neg%2==0)cout<<sum<<endl;
        else cout<<sum-2*abs(mn)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}