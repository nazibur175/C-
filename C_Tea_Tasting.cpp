#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int ok(vector<int>&presum,int val,int in,int mid) {
    //cout<<val<<" "<<in<<" "<<mid<<endl;
    int temp= presum[mid-1+1]-presum[in-1+1];
    val-=temp;
    if(val>=0) return 1;
    else return 0;
}

void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a(n,0);
        vector<int>b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>presum(n+2,0);
        for(int i=0;i<n;i++){
            cin>>b[i];
            presum[i+1]=presum[i]+b[i];
        }
        vector<int>ans(n+1,0);
        vector<int>diff(n+2,0);
        for(int i=0;i<n;i++){
            int l=i;
            int r=n;
            while(r-l>1){
                int mid=(l+r)/2;
                if(ok(presum,a[i],i,mid)){
                    l=mid;
                }
                else r=mid;
            }
            diff[i]++;
            diff[l]--;
            // l-1 to i
            int sum=presum[l-1+1]-presum[i-1+1];
            ans[l]+=min(a[i]-sum,b[l]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=diff[i];
            ans[i]+= cnt*b[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}