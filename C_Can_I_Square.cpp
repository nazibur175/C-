#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int root(int n){
    int x=sqrt(n);
    if(x*x==n) return 1;
    else return 0;
}
void solve(){
    test{
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        if(root(sum)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}