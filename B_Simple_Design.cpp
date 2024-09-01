#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int digsum(int n){
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
    
}
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        while (n)
        {
            if(digsum(n)%k==0){
                cout<<n<<endl;
                break;
            }
            n++;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}