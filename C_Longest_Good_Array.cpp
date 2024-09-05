#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l,r;
        cin>>l>>r;
        int x=2*(r-l);
        for(int i=1;;i++){
            if(i*(i+1)>x){
                cout<<i<<endl;
                break;
            }
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}