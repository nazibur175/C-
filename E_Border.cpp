#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int gc=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        gc=gcd(x,gc);
    }
    set<int>s;
    
    for(int i=0;i<k;i++){
        int temp = gc*i;
        s.insert(temp%k);
    }

    cout<<s.size()<<endl;
    for(auto x:s) cout<<x<<" ";
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}