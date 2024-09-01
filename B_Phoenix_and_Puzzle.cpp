#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

void solve(){
  test{
    int n;
    cin>>n;
    if (n%2==0 && isSquare(n/2))
        cout<<"YES"<<endl;
    else if (n%4==0 && isSquare(n/4))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}