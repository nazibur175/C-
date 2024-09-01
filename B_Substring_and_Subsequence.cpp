#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string a,b;
        cin>>a>>b;
        int l=a.size();
        int ll=b.size();

        int max_sub=0;
        for(int i=0;i<ll;i++){
            int pos=i;
            int cnt=0;
            for(int j=0;j<l;j++){
                if(a[j]==b[pos]){
                    cnt++;
                    pos++;
                    if(pos+1>ll) break;
                }
            }
            max_sub=max(max_sub,cnt);
        }
        int ans = l+ll-max_sub;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}