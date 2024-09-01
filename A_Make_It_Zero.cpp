#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       if(n%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
       }
       else {
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
       }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}