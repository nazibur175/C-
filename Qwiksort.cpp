#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define endl '\n'
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)cin>>a[i];
        int len=2*n;
        cout<<"Case "<<tt<<": ";
        //cout<<n<<endl;
        if(n==2){
            cout<<6<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<3<<endl;
            cout<<3<<" "<<4<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<3<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(n%2==0){
            cout<<6<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<n/2+1<<" "<<(n+n/2)<<endl;
            cout<<n+1<<" "<<(2*n)<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<n/2+1<<" "<<(n+n/2)<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<7<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<(n+1)/2<<" "<<(n+n/2)<<endl;
            cout<<n<<" "<<(2*n)-1<<endl;
            cout<<(n+1)<<" "<<(2*n)<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<(n+1)/2<<" "<<(n+n/2)<<endl;
            cout<<1<<" "<<n<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}