#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, vector<int>&divisor){
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
    test{
        int x,y,k;
        cin>>x>>y>>k;
        int gc=__gcd(x,y);
        vector<int>v;
        divisors(gc,v);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        if(v.size()<k) cout<<-1<<endl;
        else {
            cout<<v[k-1]<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}