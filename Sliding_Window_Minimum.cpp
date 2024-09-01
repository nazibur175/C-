#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    multiset<int>s;
    for(int i=0;i<k;i++){
        s.insert(a[i]);
    }
    cout<<*(s.begin())<<" ";
    for(int i=1;(i+k-1)<n;i++){
        s.erase(s.find(a[i-1]));
        s.insert(a[i+k-1]);
        cout<<*(s.begin())<<" ";
    }
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}