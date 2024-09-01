#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
 const int N=2e6;
int used[N]={0};
void solve(){
   int x=sqrt(N);
   map<int,int>m;
   for(int i=2;i<=N;i++){
        int val=1+i;
        int k=i*i;
        for(int j=1;j<=32;j++){
            val +=k;
            if(val>N) break;
            m[val]++;
            k*=i;
        }
   }
    test{
        int n;
        cin>>n;
        if(m[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}