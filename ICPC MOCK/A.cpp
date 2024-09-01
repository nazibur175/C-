#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int c=0;
int p_bonacci(int n,int p){
    if (n < p)
        return n;
    
    int ans=0;
    for(int i=1;i<=p;i++){
        cout<<n<<"-->"<<n-i<<endl;
        ans+=p_bonacci(n-i, p);
        c++;
    }
    // for each i between 1 to P
    //     ans += p_bonacci(N-i, P)
    return ans ;
}
void solve(){
    test{
        int n,p;
        cin>>n>>p;
    for(int i=1;i<=p;i++){
        // cout<<p_bonacci(i,3)<<" ";
        p_bonacci(n,p);
    }
    cout<<endl;
    }
    cout<<"Total "<<c<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}