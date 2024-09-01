#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int testcase; cin>>testcase; for(int t=1;t<=testcase;t++)
void solve(){
   test{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int arr[n+9];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);

    int i=1;
    int j=n;
    int ans=0;
    while (i<j)
    {
        if((arr[i]+arr[j])>b)
        {
            j--;
        }
        else if((arr[i]+arr[j])<a){
            i++;
        }
        else {
            int x=0;
            for(int k=i+1;k<=j;k++){
                if((arr[i]+arr[k])<a)
                    x++;
                else break;
            }
             ans+=j-i-x;
            // ans+=j-i;
            // cout<<ans<<endl;
            // cout<<"----"<<i<<"----"<<j<<"----"<<ans<<endl;
             i++;
        }
       
    }
    // printf("Case %lld: %lld\n",t,ans);
    cout<<"Case "<<t<<": "<<ans<<endl;
    // cout<<ans<<endl;


   }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}