#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        int prefix[n+1];
        prefix[0] = 0;
        for(int i=1;i<=n;i++) prefix[i] = prefix[i-1] + a[i];
        map<int,int>cnt;
        int left=1;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]>x){
                cnt.clear();
                left = i + 1;
            }
            if(a[i]==x){
                while(left<=i){
                    cnt[prefix[left-1]]++;
                    left++;
                }
            }
            ans+=cnt[prefix[i]-s];
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}