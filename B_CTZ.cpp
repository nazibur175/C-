#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
    int n;
    cin>>n;
    std::bitset<64> binaryRepresentation(n);
    
    //cout<<binaryRepresentation<<endl;
    int ans=0;
    int cnt=0;
    for(int i=0;i<=64;i++){
        if(binaryRepresentation[i]==0){
            cnt++;
        }
        else {
            ans=max(ans,cnt);
            break;
        }
    }
    cout<<ans<<endl;
    return 0;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}