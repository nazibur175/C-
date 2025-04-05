#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,x;
        cin>>n>>k>>x;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int cnt=0;
        int all= x/sum;
        int rem=x%sum;
        if(all>k){
            cout<<0<<endl;
            continue;
        }
        else {
            cnt+=all*n;
            sum=all*sum;
        }
        for(int i=n-1;i>=0;i--){
            if(sum>=x){
                break;
            }
            else{
                sum+=a[i];
                cnt++;
            }
        }
        int anss=((n*k)-cnt)+1;
        cout<<max(anss,0ll)<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}