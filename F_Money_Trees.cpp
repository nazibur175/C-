#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int h[n];
        for(int i=0;i<n;i++) cin>>h[i];

        int ans=0;
        int cur_sum=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if((h[i-1]%h[i])==0){
                cur_sum+=a[i];
                q.push(a[i]);
            }
            else {
                while (!q.empty())q.pop();
                cur_sum=a[i],q.push(a[i]);
            }
            while (cur_sum>k)
            {
            cur_sum-=q.front();
            q.pop();
            }
            int x=q.size();
            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}