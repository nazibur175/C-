#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        for(int j=0;j<k;j++){
                s+='a'+j;
            }
        for(int i=0;i<n;i++){
            cout<<s;
        }
        cout<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}