#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int mask[100];
void solve(){
    int n=2;
    set<int>s[n];
    s[0]=set<int>({1,3,5,6});
    s[1]=set<int>({2,3,5,7});
    for(int i=0;i<n;i++){
        mask[i]=0;
        for(auto x:s[i]){
            mask[i]|=1<<x;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int c=  __builtin_popcount(mask[i]&mask[j]);
            ans=max(ans,c);
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
