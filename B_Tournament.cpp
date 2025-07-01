#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int temp=v[j-1];
        sort(v.begin(),v.end());
        if(k>n){
            cout<<"NO\n";
            continue;
        }
        if(k==1){
            if(v[n-1]==temp){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else cout<<"YES\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}