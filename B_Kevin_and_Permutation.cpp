#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n+1]={0};
        int c=1;
        for(int i=k;i<=n;i+=k){
            a[i]=c++;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                a[i]=c++;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
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