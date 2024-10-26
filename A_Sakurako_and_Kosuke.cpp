#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int nn=n;
        n=0;
        int move=0;
        for(int i=1;;i+=2){
            if(move==0){
                n+=(-i);
            }
            else {
                n+=i;
            }
            move^=1;
            if(abs(n-0)>nn){
                break;
            }
        }
        if(move) cout<<"Sakurako"<<endl;
        else cout<<"Kosuke"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}