#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string sa,sb;
    cin>>sa>>sb;
    int n=sa.size();
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(sa[i]==sb[i] && sa[i]=='0' && sa[i+1]==sb[i+1] && sa[i+1]=='1'){
            flag =1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
test{
    solve();
}

}