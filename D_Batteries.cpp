#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int l,int r){
 uniform_int_distribution<int> uid(l,r);
 return uid(rng);
}
int n;
int query(){
    int i=rand(1,n);
    int j=rand(1,n);
    if(i==j) return 0;
    cout<<i<<' '<<j<<endl;
    cout<<flush;
    int x;
    cin>>x;
    if(x){
        cout<<i<<" "<<j<<endl;
        return 1;
    }
    return 0;
}
void solve(){
    test{
        // int n;
        cin>>n;
        int total=(n*n);
        while(total--){
            if(query()) break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}