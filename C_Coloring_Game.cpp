#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=a[i]+a[j];
                int in=lower_bound(a.begin(), a.end(), sum) - a.begin();
                in--;
                int temp=a[n-1] - sum +1;
                int in2=lower_bound(a.begin(), a.end(), temp) - a.begin();
                in2= max(j+1, in2);
                if(in>=in2){
                    ans+=in-in2+1;
                }
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