#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int cnte=0,cnto=0;
        int sume=0,sumo=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(i%2==0){
                cnte++;
                sume+=x;
            }
            else{
                cnto++;
                sumo+=x;
            }
        }
        if(sume%cnte==0 && sumo%cnto==0 && sume/cnte==sumo/cnto){
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