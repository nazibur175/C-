#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
void solve(){
    test{
        int n;
        cin>>n;
        if(n<3) cout<<-1<<endl;
        else if(n%2==1) cout<<1<<" "<<1<<" "<<n/2<<endl;
        else if(isPowerOfTwo(n)) cout<<-1<<endl;
        else if(n%3==0) cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
        else if((n-2)%3==0 && ((n-2)/3)%2==1) cout<<1<<" "<<2<<" "<<(n-2)/3<<endl;
        else if(n%2==0 && n>4 && ((n-2)/2)%2==0) cout<<2<<" "<<2<<" "<<(n-2)/2<<endl;
        else if((n-4)%4==0) cout<<1<<" "<<4<<" "<<(n-4)/2<<endl;
        else cout<<-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}