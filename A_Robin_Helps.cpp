#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=k) sum+=x;
            else if(x==0 && sum){
                cnt++;
                sum--;
            }
        }
        cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}