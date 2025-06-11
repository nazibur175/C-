#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=stoi(s);
        int f=0;
        for(int i=0;i<=99;i++){
            for(int j=0;j<=99;j++){
                if((i + j)*(i+j)==n){
                    cout<<i<<" "<<j<<endl;
                    f=1;
                    break;
                }

            }
            if(f) break;
        }
        if(f==0) cout<<"-1"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}