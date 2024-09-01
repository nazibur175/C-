#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int countBits(int num) {
    int count = 0;
    while (num) {
        count++;
        num >>= 1; 
    }
    return count;
}
void solve(){
    int n;
    cin>>n;
    int bit = countBits(n);
    //cout<<bit<<endl;
    int x = 1LL<<bit;
    //cout<<x<<endl;
    
    cout<<(n*bit - (x-n))<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}