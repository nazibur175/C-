#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)


int query(int i,int j){
    cout<<i<<' '<<j<<endl;
    cout<<flush;
    int x;
    cin>>x;
    if(x){
        //cout<<i<<" "<<j<<endl;
        return 1;
    }
    return 0;
}
void solve(){
    test{
        int n;
        cin>>n;
        int f=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j+i<=n;j++){
                if(query(j,j+i)){
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}