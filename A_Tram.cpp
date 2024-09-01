#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int cur=0;
    int ma=0;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        // a= 6 - nama
        // b= 4 - utha
        cur= cur + (b-a);
        ma=max(ma,cur);
    }
    cout<<ma<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}