#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int mx=max(n,m);
        int mn=min(n,m);
        if((mx-k)>mn || mx<k) cout<<-1<<endl;
        else{
            int ch= 1 - (n==mx);
            string ans;
            while (ans.size()<(mx+mn))
            {
                for(int i=1;i<=k;i++){
                    if(ch==0 && n<=0) break;
                    if(ch==1 && m<=0) break;
                    if(ch) {
                        ans.push_back('1');
                        m--;
                    }
                    else {
                        ans.push_back('0');
                        n--;
                    }
                }
                ch = 1-ch;
            }
            cout<<ans<<endl;
            
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}