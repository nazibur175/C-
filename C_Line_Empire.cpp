#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,a,b;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        // Empire is at position 0 
        for(int i=0;i<n;i++){
            ans+=b*arr[i];
        }
        // Moving the empire to position i
        int temp=0;
        for(int i=0;i<n;i++){
            int diff=arr[i]-temp;
            int cost=diff*b;
            int cur_cost= (n-i-1)*cost;
            int empire_moving_cost=diff*a;
            if(empire_moving_cost<cur_cost){
                ans+=empire_moving_cost;
                ans-=cur_cost;
                temp=arr[i];
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