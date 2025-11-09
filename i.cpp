#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        n=2*n+1;
        int a[n];
        for(int i=1;i<n;i++) cin>>a[i];

        int diff[n]={0};
        for(int i=1;i<n-1;i++){
            if(a[i]>=0 && a[i+1]<=0){
                diff[i]=1;
                diff[i+1]=1;
            }
        }
        // for(int i=1;i<n;i++) {
        //     cout<<diff[i]<<" ";
        // }
        // cout<<endl;

        int presum[n+5]={0};
        for(int i=1;i<n;i++){
            presum[i]=presum[i-1]+diff[i];
        }
        // for(int i=1;i<n;i++){
        //     cout<<presum[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"q "<<q<<endl;
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            // cout<<l<<" l r "<<r<<endl;
            cout<<(presum[r]-presum[l-1])/2<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}