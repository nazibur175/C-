#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mi= *min_element(a,a+n);
    int ma= *max_element(a,a+n);
    //if(is_sorted(a,a+n))
    int ma_in=0;
    for(int i=0;i<n;i++){
        if(a[i]==ma){
            ma_in=i;
            break;
        }
    }
    int mi_in=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==mi){
            mi_in=i;
            break;
        }
    }
    // 0 1 2 3 4 5
    int ans = (ma_in) + (n-1 - mi_in) ;
    if(mi_in<ma_in) ans--;
    cout<<ans<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}