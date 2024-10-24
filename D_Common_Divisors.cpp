#include<bits/stdc++.h>
using namespace std;
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
 
int div_cnt[N+1];
int n;
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        const int mx=sqrtl(x);
         for(int j=1;j<=mx;j++){
            if(x%j==0){
                div_cnt[j]++;
                if(x/j != j) 
                    div_cnt[x/j]++;
            }
         }
    }
    for(int i=N;i>=1;i--){
        if(div_cnt[i]>=2){
            cout<<i<<endl;
            break;
        }
    }
 
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
 
}