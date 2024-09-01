#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l,r;
        cin>>l>>r;
        int cnt=1;
        while (r>=(l<<cnt)) cnt++;
        int ans = (r/(1<<(cnt-1))-l+1);
        if(cnt>1){
            ans+= (cnt-1)*max(0LL,(r/(1<<(cnt-2)))/3 - l + 1);
        }
        cout<<cnt<< " " <<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}   