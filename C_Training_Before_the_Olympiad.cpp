#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int odd_cnt=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            sum+=(x - x%2);
            odd_cnt+=x%2;
            if(i==1) cout<<x<<" ";
            else {
                int neg=odd_cnt/3;
                int temp= odd_cnt-neg;
                temp=temp/2;
                temp*=2;
                cout<<sum+temp<<" ";
            }
        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}