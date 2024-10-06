#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,nn,nnn;
        cin>>n>>nn>>nnn;

        string ans;
        ///000000000
        if(n)
        for(int i=0;i<n+1;i++){
            ans.push_back('0');
        }

        //01010101010
        int zero=0;
        if(ans.empty() && nn) ans.push_back('0');
        int f=0;
        if(nn%2==0 && nn){
            nn--;
            f=1;
        }
        for(int i=0;i<nn;i++){
            if(zero) ans.push_back('0');
            else ans.push_back('1');
            zero=1-zero;
        }

        if(nnn){
            
            if(zero){
                for(int i=0;i<nnn;i++){
                    ans.push_back('1');
                }
            }
            else    {
                for(int i=0;i<nnn+1;i++){
                    ans.push_back('1');
                }
            }
        }

        if(f) ans.push_back('0');
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}