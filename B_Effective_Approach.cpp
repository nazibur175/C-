#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int arr[N];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[x]=i;
    }
    int c1=0;
    int c2=0;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        c1+=arr[x];
        c2+=n-arr[x]+1;
    }
    cout<<c1<<" "<<c2<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}