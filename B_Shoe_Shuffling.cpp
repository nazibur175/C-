#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(r<n && a[l]==a[r]){
                r++;
            }
            if(l+1==r){
                f=1;
                break;
            }
            for(int j=l+1;j<r;j++){
                ans.push_back(j+1);
            }
            ans.push_back(l+1);
            i=r-1;
        }
        if(f){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
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