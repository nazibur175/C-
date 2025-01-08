#include<bits/stdc++.h>
using namespace std;
//#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int mp[1000001];
int ans=1;
void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                mp[i]++;
                mp[n/i]++;
                {
                    if(mp[i]>1)
                    ans=max(ans,i);
                    if(mp[n/i]>1)
                    ans=max(ans,n/i);
                }
            }
            else
               {
                     mp[i]++;
                     if(mp[i]>1)
                      ans=max(ans,i);
               }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        divisors(x);
    }
    
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}