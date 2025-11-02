#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int f=0;
        for(int i=2;i*i<n;i++){
            if(n%i) continue;
            if((n/i)%i){
                f=1;
                break;
            }
        
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"!YES"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}