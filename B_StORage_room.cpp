#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int ans[n]={0};
        for(int i=0;i<n;i++){
            int x=0;
            if(i==0 && n>1) x=a[0][1];
            else x=a[i][0];
            for(int j=0;j<n;j++){
                if(i!=j)
                x=(x& a[i][j]);
            }
        ans[i]=x;
        }
    
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((ans[i]|ans[j]) != a[i][j] && i!=j ){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;
}
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}