#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e18;
void solve(){
    int b;
    cin>>b;
    int yes=0;
    for(int j=1;j<=15;j++){
        int a=1;
        for(int i=1;i<=j;i++){
            a=a*j;
        }
        if(a==b){
            yes=j;
            break;
        }
    }
    if(yes==0){
        cout<<-1<<endl;
    }
    else cout<<yes<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}