#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        string ans="";
        set<int>s;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<m;i++){
            if(s.find(a[i])!=s.end() && s.size()-1==n-1){
                ans+="1";
            }
            else if(s.find(a[i])==s.end() && s.size()==n-1){
                ans+="1";
            }
            else ans+="0";
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}