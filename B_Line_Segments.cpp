#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int dis= (x-a)*(x-a) + (y-b)*(y-b);
        int mx=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            mx=max(mx,temp);
            sum+=temp;
        }
        int mn_dis= 2*mx - sum;
        if(mn_dis<0) mn_dis=0;
        mn_dis=mn_dis*mn_dis;
        mx=sum*sum;
        if(mn_dis<=dis && dis<=mx){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}