#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int search(int n){
    int l=1;
    int r=1e12;
    while (l<r)
    {
        int mid=l + (r-l)/2;
        int cnt = ((mid+1)/2) - 1 + (mid/4) ;
        if(mid>=4) cnt--;
        if(cnt>=n) r=mid;
        else l=mid+1;
    }
    //r++;
    //cout<<(r+1)/2 - 2 + r/4<<endl;
    return r;
    
}
void solve(){
    int n;
    cin>>n;
    cout<<search(n)<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}