#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        n--;
        int temp=1000;
        cout<<temp<<" ";
        while (n--)
        {
            int x;
            cin>>x;
            temp+=x;
            cout<<temp<<" ";
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