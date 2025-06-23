#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int mn=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    set<int>s;
    for(int i=0;i<n;i++){
        for(int j=1;j<=sqrt(a[i]);j++){
            if(a[i]%j==0){
                s.insert(j);
                s.insert(a[i]/j);
            }
        }
    }
    int ans=0;
    int gc=0;
    for(auto it:s){
        gc=0;
        for(int i=0;i<n;i++){
            if(a[i]%it==0)
            gc=__gcd(gc,a[i]);
        }
        if(gc==it && it<=mn){
            ans++;
        }
    }
    cout<<ans<<"\n";
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}