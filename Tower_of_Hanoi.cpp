#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
//tower(size,source,destination,helping hand)
void tower(int n, int s,int d,int h){
    if(n==0) return;
    tower(n-1,s,h,d);
    cout<<s<<" "<<d<<endl;
    tower(n-1,h,d,s);

}
void solve(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    tower(n,1,3,2);


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}