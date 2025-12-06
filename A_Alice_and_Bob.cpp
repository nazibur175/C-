#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n,aa;
        cin>>n>>aa;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b=aa-1;
        int bb=aa+1;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]>=bb){
                cnt1++;
            }
            if(a[i]<=b) cnt2++;
        }
        if(cnt1>=cnt2) cout<<bb<<endl;
        else cout<<b<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}