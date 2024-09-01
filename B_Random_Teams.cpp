#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>n>>m;
    int temp=n-(m-1);
    int ma_ans= (temp*(temp-1))/2;
    int k=n/m;
    int extra=n%m;
    int possiblefork=(k*(k-1))/2;
    int mi_ans= m*possiblefork;
    mi_ans+= extra*k;
    cout<<mi_ans<<" "<<ma_ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}