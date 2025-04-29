#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int premax[n+2]={0};
        premax[1]=a[1];
        for(int i=2;i<=n;i++){
            premax[i]=max(premax[i-1],a[i]);
        }
        int sufsum[n+2]={0};
        for(int i=n;i>=1;i--){
            sufsum[i]=sufsum[i+1]+a[i];
        }
        for(int i=n;i>=1;i--){
            int sum=sufsum[i];
            if(a[i]<premax[i-1]){
                sum-=a[i];
                sum+=premax[i-1];
            }
            cout<<sum;
            if(i!=1){
                cout<<" ";
            }
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