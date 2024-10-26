#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

int lcm(int a,int b){
    return (a/__gcd(a,b))*b;
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
       
    }
    int ans=0;
    
    for(int i=1;i<(1<<m);i++){
        int lc=1;
        int bit_cnt=0;
        for(int j=0;j<m;j++){
            if(i&(1<<j)){
                bit_cnt++;
                lc=lcm(lc,v[j]);
            }
        }
        if(bit_cnt%2==1){
            ans+= n/lc;
        }
        else{
            ans-=n/lc;
        }
    }
    cout<<"Case "<<tt<<": ";
    cout<<n-ans<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}