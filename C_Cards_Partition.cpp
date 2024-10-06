#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        int mx =0 ;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx = max(mx,a[i]);
            sum+=a[i];
        }

        int ans =1 ;
        for(int i=2;i<=n;i++){
            int number_of_deck = sum/i;
            if(sum%i) number_of_deck++;
            int lagbe = max(number_of_deck,mx)*i;
            if((sum+k)>=lagbe){
                ans=i;
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