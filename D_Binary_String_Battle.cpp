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
        cin>>s;
        int total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                total++;
            }
        }
        if(total<=k || 2*k>n){
            cout<<"Alice\n";
        }
        else {
            cout<<"Bob\n";
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}