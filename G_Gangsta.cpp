#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int t1=(n*n*(n+1))/2 - (n*(n+1)*(2*n+1))/6 + (n*(n+1))/2;
        int arr[n+1]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                arr[i+1]=arr[i]+1;
            }else{
                arr[i+1]=arr[i]-1;
            }
        }
        int t2=0;
        int pre=0;
        sort(arr, arr+n+1);
        for(int i=0;i<=n;i++){
            t2+= arr[i]*i - pre;
            pre+=arr[i];
        }
        cout<<(t1+t2)/2<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}