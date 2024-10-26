#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e18;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    map<int,int>mp;
    for(int i=0;i<m;i++){
        cin>>v[i];
        mp[v[i]]++;
        
    }
    int ans=0;
    for(int i=0;i<(1<<m);i++){
        int mul=1;
        int f=1;
        int bit_cnt=0;
        for(int j=0;j<m;j++){
            if(i&(1<<j)){
                bit_cnt++;
                if(mul>N/v[j]){
                    f=0;
                    break;
                }
                mul*=v[j];
            }
            
        }

        if(f==0  || mul==1){
            continue;
        }
        else if(bit_cnt%2==1){
            ans+= n/mul;
        }
        else{
            ans-=n/mul;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}