#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, vector<int> &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
                
            else
               divisor.push_back(i);
        }
    }
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>divisor;
        divisors(n,divisor);
        sort(divisor.begin(),divisor.end());
        //cout<<divisor.size()<<endl;
        int pre[n+1];
        pre[0]=a[0];
    
        for(int i=1;i<n;i++)
        pre[i]=pre[i-1]+a[i];

        int ans=0;
        for(auto x:divisor){
            int ma=0;
            int mi=INT64_MAX;
            int l=0,r=x-1;
            while(r<n){
                int val=0;
                if(l==0)
                val=pre[r];
                else 
                val=pre[r]-pre[l-1];
                ma=max(val,ma);
                mi=min(mi,val);
                l=l+x;
                r=r+x;
            }
            int temp=abs(ma-mi);
            ans=max(ans,temp);
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