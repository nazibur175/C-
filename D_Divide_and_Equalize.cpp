#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divcnt(int n,map<int,int>&m){
    for(int i=2;i*i<=n;i++){
        while (n%i==0)
        {
            n/=i;
            m[i]++;
        }
    }
    if(n>1) m[n]++;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            divcnt(a[i],m);
        }
        int f=1;
        for(auto x:m){
            if(x.second%n){
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}