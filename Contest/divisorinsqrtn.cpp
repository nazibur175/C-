#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, auto &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
                
            else
               divisor.push_back(i);
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vector<int>divisor;
    divisors(n,divisor);
    sort(divisor.begin(),divisor.end());
    for(auto x: divisor){
        cout<<x<<" ";
    }
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}