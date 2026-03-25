#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n,c,k;
        cin>>n>>c>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<=c){
                int temp = min(k,c-a[i]);
                c+=temp;
                c+=a[i];
                k-=temp;
            }
        }
        cout<<c<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}