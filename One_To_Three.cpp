#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int ans1=sum;
        for(int i=1;i<n-1;i++){
            if(a[i-1]+a[i+1]==4 && a[i]==3){
                ans1-=2;
                a[i]=2;
            }
        }
        cout<<sum<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}