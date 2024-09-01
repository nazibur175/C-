#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n;
    cin>>n;
    int arr[1001]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]=i+1;
    }
    int ans = -1;
    for(int i=0;i<1001;i++)
        if(arr[i]!=0)
        for(int j=i;j<1001;j++)
        if(arr[j]!=0){
            if(__gcd(i,j)==1){
                ans = max(ans,arr[i] +arr[j]);
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