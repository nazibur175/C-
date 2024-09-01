#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int findXor(int n){
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else return 0;
}
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        // MEX  XOR

        int x=findXor(a-1);
        if(x==b) cout<<a<<endl;
        else if((b^x)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
            // x^b^1 ^ 1
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}