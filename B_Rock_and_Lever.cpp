#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int calpow(int n){
    return (63-__builtin_clzll(n));
}
void solve(){
    
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int>m;
        for(int i=0;i<n;i++){
        m[calpow(a[i])]++;
        }
        int cnt=0;
        for(auto x:m){
            int temp=x.second;
            cnt+= (temp*(temp-1))/2;
        }
        cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}