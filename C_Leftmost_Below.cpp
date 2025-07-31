#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i =0;i<n;i++){
            cin>>b[i];
        }
        int mn=b[0];
        int f=1;
        for(int i=1;i<n;i++){
            int big=0;
            if(b[i]%2==0){
                big=(b[i]+2)/2;
            }
            else big=(b[i]+1)/2;
            if(big>mn){
                f=0;
                break;
            }
            mn=min(mn,b[i]);
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}