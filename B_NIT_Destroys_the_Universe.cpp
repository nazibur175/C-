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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int left=-1,right=n;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                left=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=0){
                right=i;
                break;
            }
        }
        if(left==-1){
            cout<<0<<endl;
            continue;
        }
        int ans=1;
        for(int i=left;i<=right;i++){
            if(a[i]==0){
                ans++;
                break;
            }
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