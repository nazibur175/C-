#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
int a[N];
int n;
int cal(int pos, int cntl, int cntr, int pl,int pr){
    if(pos==n) return 1;

    // jodi L bosai
    int npr=a[pos]-cntl -1;
    int npl=n-pos-1 - npr ;
    if(pl>=1 && pl-1==npl && pr==npr){
        return cal(pos+1,cntl+1, cntr, pl-1, pr);
    }
    // Jodi R bosai
    if(pr>=1 && pl==npl && pr-1==npr){
        return cal(pos+1, cntl, cntr+1, pl, pr-1);
    }
    return 0;
}
void solve(){
    test{
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //           L                          R
        int ans= cal(1,1,0,n-1-(a[0]-1),a[0]-1) + cal(1,0,1,n-1-(a[0]-1),a[0]-1);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}