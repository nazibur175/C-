#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        n=n*2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%4==0 || i%4==1){
                    if(j%4==0 || j%4==1){
                        cout<<"#";
                    }
                    else cout<<".";
                }
                else{
                    if(j%4==0 || j%4==1){
                        cout<<".";
                    }
                    else cout<<"#";
                }
            }
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}