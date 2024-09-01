#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }

    else if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4){
        cout<<"3 1 4 2"<<endl;
    }
    else {
        for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
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