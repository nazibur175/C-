#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int s,m;
int val(int mid){
    int temp = mid + m + (s+mid-1)/mid;
    return min(temp,s);
}
int search(){
    int l=1;
    int r=1e12+9;
        while (r > l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if(val(mid1)<=val(mid2)){
            r=mid2-1;
        }
        else{
           l=mid1+1;
        }
    }
    return r;
}
void solve(){
    cin>>s>>m;
    //cout<<search()<<endl;
    //cout<<val(3)<<endl;
    int ans= search();
    //cout<<ans<<endl;
    int xx=0;
    while(ans!=val(search())){
        ans=val(search());
        xx+=val(ans);
        s=ans;
    }
    //cout<<val(ans)<<endl;
    cout<<xx<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}