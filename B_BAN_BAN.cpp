#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int k=n/2;
        if(n%2==1)k++;
        cout<<k<<endl;
        int p=1,q=n*3;
        while(q>p){
            cout<<p<<" "<<q<<endl;
            p=p+3;
            q=q-3;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}