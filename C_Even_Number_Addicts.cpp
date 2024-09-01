#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a=0;
        int b=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x%2==0) a++;
            else  b++;
        }
    if(b%4==0 || b%4==3) cout<<"Alice"<<endl;
    else if(b%4==1 && a%2==1) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}