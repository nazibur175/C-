#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int c4=0;
    int c7=0;
    while (n)
    {
        if(n%10==4) c4++;
        else if(n%10==7) c7++;
        n/=10; 
    }
    n=c4+c7;

    int flag=1;
    if(n==0) flag =0;
    while (n)
    {
        if(n%10==4 || n%10==7) n/=10;
        else {
            flag =0;
            break;
        }
    }
    if(flag ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}