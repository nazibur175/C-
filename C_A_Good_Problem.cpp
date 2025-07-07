#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        
        if(n%2){
            cout<<l<<endl;
        }
        else if(n<=2){
            cout<<"-1"<<endl;
        }
        else {
            int temp=1;
            while(temp<=l){
                temp*=2;
            }
            if(temp>r){
                cout<<"-1"<<endl;
            }
            else {
                if(k<=(n-2)){
                    cout<<l<<endl;
                }
                else cout<<temp<<endl;
            }
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}