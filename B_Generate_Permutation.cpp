#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int ans[n+3]={0};
        if(n%2==0) cout<<"-1"<<endl;
        else{
            int temp=1;
            int half = (n+1)/2;
            for(int i=1;i<=half;i++){
                ans[i]=temp;
                temp+=2;
            }
            temp=2;
            for(int i=n;i>half;i--){
                ans[i]=temp;
                temp+=2;
            }
            for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}