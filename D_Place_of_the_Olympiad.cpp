#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,m,k;
int ok(int flap){
    int x=flap+1;
    int pos = flap*(m/x) + m%x;
    pos*=n;
    return pos>=k;
}
void solve(){
    test{
        cin>>n>>m>>k;
        int l=0,r=n*m;
        while(l<r){
            int mid=(l+r)/2;
            if(ok(mid)){
                r=mid;
            }
            else l=mid+1;
        }
        cout<<l<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}