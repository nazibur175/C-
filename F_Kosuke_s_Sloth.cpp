#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a=1;
        int b=1;
        if(k==1){
            cout<<(1*n)%mod<<endl;
            continue;
        }
        for(int i=3;;i++){
            int c=(a+b)%k;
            if(c==0){
                cout<<((i%mod)*(n%mod))%mod<<endl;
                break;
            }
            a=b;
            b=c;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}