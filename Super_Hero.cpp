#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const int N = 1e6 + 9;
vector<int> maxDivisor(N+1, 1);
void sieveMaxDivisor() {
    for (int i = 2; i*i <= N; ++i) {
        if(maxDivisor[i]==1)
        for (int j = i*i; j <= N; j += i) {
            maxDivisor[j] = max(maxDivisor[j], j/i);
        }
    }
}

void solve(){
    sieveMaxDivisor();
    test{
        int n,x;
        cin>>n>>x;
        int temp = 64-__builtin_clzll(x)-1;
        int ans=temp;
        
       
        while (n)
        {
            ans++;
            if(n==1)break;
            n=maxDivisor[n];
        }
        cout<<ans-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}