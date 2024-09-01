#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int N=1e6;
int a[N];
int ok(int mid,int k,int &extra){
    for(int i=0;i<n;i++){
        if(a[i]>mid) extra++;
        else if((a[i]+k)>=mid){
            k=k - (mid-a[i]);
        }
        else{
            return false;
        }
    }
    //if(k<0) return false;
    extra=min(n,extra+k);
    return true;
}
void solve(){
    test{
        int k;
        cin>>n>>k;
        
        for(int i=0;i<n;i++) cin>>a[i];
        
        int l=0;
        int r=1e18;
        int extra=0;
        int cnt_pos=0;
        while (l<=r)
        {
            extra=0;
            int mid = (l+r)/2;
            if(ok(mid,k,extra)){
                cnt_pos=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        //cout<<cnt_pos<<endl;
        extra=0;
        ok(cnt_pos,k,extra);

        int size = cnt_pos*n + extra;
        int ans = size - n + 1;
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}