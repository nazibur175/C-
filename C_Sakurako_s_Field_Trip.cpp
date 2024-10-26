#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=1;
        int r=n-2;
        while (l<r)
        {
            int x=a[l];
            int y=a[r];
            int xx=a[l-1];
            int yy=a[r+1];
            l++;
            r--;
            if(x!=xx && y!=yy){
                continue;
            }
            else if(x==y) continue;
            else swap(a[l-1],a[r+1]);
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                ans++;
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