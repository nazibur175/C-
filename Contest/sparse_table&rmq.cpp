//range maximum,minimum,xor,gcd
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
const int M=25;
int m[N][M];
int query(int l,int r){
    int length=r-l+1;
    int k=31-__builtin_clz(length);
    return min(m[l][k],m[r-(1<<k)+1][k]);
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    int log=M;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[i][0]=a[i];
    }
    //O(n*log(n))
    for(int k=1;k<log;k++){
        for(int i=0;i+(1<<k)-1<n;i++){
            m[i][k]=min(m[i][k-1],m[i+(1<<(k-1))][k-1]);
        }
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(l,r)<<endl;
    }
    



}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}