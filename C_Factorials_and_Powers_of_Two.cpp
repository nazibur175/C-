#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n; 
        cin>>n;
        int ans=100000;
        vector<int>fact;
        for(int i=3, x=6; i<=14; i++, x*=i) fact.push_back(x);
 
        for(int k=0; k<(1<<12);k++){
            int sum = 0;
            for(int i=0; i<12; i++)
                if(k&(1<<i)) 
                    sum+=fact[i];
        int temp=__builtin_popcountll(k)+__builtin_popcountll(n-sum);
        if(sum <= n) ans = min(ans,temp);
    }
        cout<<ans<<endl;
}
    }

int32_t main()
{
//ios_base::sync_with_stdio(false);
//cin.tie(nuintptr);
solve();

}