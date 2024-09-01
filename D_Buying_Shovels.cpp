#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
void divisors(int n, auto &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                if(i<=k)
                divisor.push_back(i);
                if((n/i)<=k)
                divisor.push_back(n/i);
            }
                
            else{
                if(i<=k)
               divisor.push_back(i);
            }
        }
    }
}
void solve(){
    test{
        //int n,k;
        cin>>n>>k;
        vector<int>v;
        divisors(n,v);
        sort(v.begin(),v.end());
        //for(auto x:v) cout<<x<<" ";
        //cout<<endl;
        cout<<n/v.back()<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}