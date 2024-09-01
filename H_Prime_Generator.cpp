#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool prime_chek(int n)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
            return false;

    }
    return true;
}
void solve(){
    test{
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
            {
                if(prime_chek(i))
                    cout<<i<<endl;
            }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}