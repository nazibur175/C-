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
    test{
        int n;
        cin>>n;
        int a[n+9]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>div;
        divisors(n,div);
        sort(div.rbegin(),div.rend());
        int ans=0;
        for(auto x:div){
            int gc=0;
            for(int i=1;i+x<=n;i++){
                gc=__gcd(gc,abs(a[i+x]-a[i]));
            }
            ans+= (gc!=1);
            //cout<<gc<<endl;
        }
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}