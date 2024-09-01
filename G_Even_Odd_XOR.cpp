#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n%4==0){
            for(int i=2,cnt=1;cnt<=n;i++,cnt++){
                cout<<i<<" ";
            }
        }
        else if(n%4==3){
            cout<<"1 3 2 ";
            for(int i=6,cnt=4;cnt<=n;i++,cnt++){
                cout<<i<<" ";
            }
        }
        else if(n%4==1){
            cout<<"0 ";
            for(int i=2,cnt=2;cnt<=n;i++,cnt++){
                cout<<i<<" ";
            }
        }
        else if(n%4==2){
            cout<<"1 2 3 4 8 12 ";
            for(int i=14,cnt=7;cnt<=n;i++,cnt++){
                cout<<i<<" ";
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