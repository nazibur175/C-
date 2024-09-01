#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR"<<endl;
        }
        else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else cout<<"NONE"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}