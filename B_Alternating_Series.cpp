#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n==2){
            cout<<"-1 2\n";
        }
        else {
            for(int i=1;i<=n;i++){
                if(i%2==1) cout<<"-1 ";
                else if(i==n && n%2==0){
                    cout<<2<<" ";
                    //continue;
                }
                else cout<<3<<" ";
            }
            cout<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}