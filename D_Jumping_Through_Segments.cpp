#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int N=2e5+9;
int l[N];
int r[N];
int ok(int k){
    int left=0;
    int right=0;
    for(int i=0;i<n;i++){
        right=right+k;
        left=left-k;
        if(left>r[i] || right<l[i]) return false;
        left=max(left,l[i]);
        right=min(right,r[i]);
    }
    return 1;
}
void solve(){
    test{
        cin>>n;
        int x,y;
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }
        int left=0;
        int right=1e9;
        int ans=0;
        while (left<right)
        {
            int mid=(left+right)/2;
            if(ok(mid)) {
                ans=mid;
                right=mid;
            }
            else left=mid+1;
        }
        cout<<left<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}