#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        string s,ss;
        cin>>s>>ss;
        int cnt=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            s[i]^=ss[i];
            if(s[i]){
            cnt+=s[i];
            v.push_back(i);
            }
        

        }
        if(cnt%2==1) cout<<"-1"<<endl;
        else {
            if(cnt==2) {
               int l=v[0];
               int r=v[1];
               if(l+1==r) cout<<min(x,2*y)<<endl;
               else cout<<min(y,(r-l-1)*x)<<endl;
            }
            else cout<<(cnt/2)*y<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}