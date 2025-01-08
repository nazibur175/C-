#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int ans=0;
        int one=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1' || b[i]=='1') one=1;
            if(a[i]=='1' && b[i]=='1') cnt++;
            if(a[i]!=b[i]){
                ans=1;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else if(cnt%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}