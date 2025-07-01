#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        int cnt[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        int mx=0;
        while(cnt[mx]){
            mx++;
        }
        int diff[n+5]={0};
        for(int i=0;i<=mx;i++){
            int l=cnt[i];
            int r=n-i;
            if(l<=r){
                diff[l]++;
                diff[r+1]--;
            }
        }
        int c=0;
        for(int i=0;i<=n;i++){
            c+=diff[i];
            cout<<c;
            if(i<n) cout<<" ";
            else cout<<"\n";
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}