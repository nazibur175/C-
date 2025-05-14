#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //cout<<" ";
        for(int ii=n;ii>i;ii--) cout<<" ";
        for(int j=1;j<=2*i;j++){
            if(j==1) cout<<"/";
            else if(j==2*i){
                cout<<"\\";
            }
            else cout<<"-";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        //cout<<" ";
        for(int ii=n;ii>i;ii--) cout<<" ";
        for(int j=1;j<=2*i;j++){
            if(j==1) cout<<"\\";
            else if(j==2*i){
                cout<<"/";
            }
            else cout<<"-";
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