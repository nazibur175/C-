#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>vv(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>vv[i];
        }
        int l=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(v[i]!=vv[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]!=vv[i]){
                r=i;
                break;
            }
        }
        while(l>0 && vv[l]>=vv[l-1]){
            l--;
        }
        while(r<n-1 && vv[r]<=vv[r+1]){
            r++;
        }
        cout<<l+1<<" "<<r+1<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}