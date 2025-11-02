#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 2e5+9;
int a[N];
int n,k,x;
int ok(int mid){
    // int cnt=0;
    // cnt+= max(0ll,(a[0]-(mid-1)));
    // for(int i=0;i<n-1;i++){
    //     cnt += (max(0ll,a[i+1]-a[i]-mid))/(mid);
    // }
    // // if(a[n-1]<x){
    // cnt+= (max(0ll,(x-(a[n-1]+mid-1))));
    // }
    // cout<<cnt<<endl;
    int l=mid;
    int in=0;
    int cnt=0;
    for(int i=0;i<n;i++){
            while(cnt<k && (in+l)<=a[i]){
                cnt++;
                in++;
            }
            in=a[i]+max(l,1ll);
    }

    in=x;
    while(cnt<k && (in-l)>=a[n-1]){
                cnt++;
                in--;
    }
    return cnt>=k;
}
void solve(){
    test{
        cin>>n>>k>>x;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int l=0;
        int r=x+1;
        while (r-l>1)
        {
            int mid=(l+r)/2;
            if(ok(mid)){
                l=mid;
            }
            else r=mid;
        }
        // cout<<l<<endl;
        // cout<<ok(1)<<endl;
        vector<int>ans;

        int in=0;
        for(int i=0;i<n;i++){
            while(ans.size()<k && (in+l)<=a[i]){
                ans.push_back(in);
                in++;
            }
            in=a[i]+max(l,1ll);
        }

        in=x;
        while(ans.size()<k && (in-l)>=a[n-1]){
                ans.push_back(in);
                in--;
        }
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
            else cout<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}