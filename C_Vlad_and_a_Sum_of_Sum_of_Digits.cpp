#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int pre[N];
int cal(int n){
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
    
}
void solve(){
    for(int i=1;i<=N;i++){
        pre[i]=pre[i-1]+cal(i);
    }
    test{
        int n;
        cin>>n;
        cout<<pre[n]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}