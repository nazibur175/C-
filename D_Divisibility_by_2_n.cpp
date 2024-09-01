#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cnt(int n){
    int c=0;
    while (n%2==0)
    {
        c++;
        n/=2;
    }
    return c;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        int have=0;
        vector<int>contribute;
        for(int i=1;i<=n;i++){
            cin>>a[i];
             have+=cnt(a[i]);
            int temp = cnt(i);
            contribute.push_back(temp);
        }
        sort(contribute.rbegin(),contribute.rend());
        int ans=0;
        for(auto x:contribute){
            if(have>=n) break;
            have+=x;
            ans++;
        }
        if(have>=n) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}