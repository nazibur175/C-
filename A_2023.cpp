#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int mul=1;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mul*=x;
        }
        int temp=2023;
        if(temp%mul==0){
            cout<<"YES"<<endl;
            for(int i=1;i<=k;i++){
                if(i==k) cout<<temp/mul<<" ";
                else cout<<1<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}