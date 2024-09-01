#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
const int N=1e4;
int a[N];
int ok(int mid){
    int cnt=0;
    int sum=0;
    for(int i=0;i<=n;i++){
        
        if(a[i]>mid) return 0;
        if((a[i]+sum) > mid){
            cnt++;
            sum=a[i];
        }
        else sum+=a[i];
    }
    return cnt<=k;
}

void printAns(int mid)
{
    vector<int>v;
    int sum = 0;
    int cnt = 0;

    for(int i=0; i<=n; i++)
    {
        if((sum+a[i]) > mid){
            v.push_back(sum);
            cnt++;
            sum = a[i];
        }
        else
            sum += a[i];

        if(n-i+1==k-cnt+1) 
        {
            v.push_back(sum);
            for(int j=i+1;j<=n;j++)
                v.push_back(a[j]);

            break;
        }
    }

    for(auto x:v) cout<<x<<endl;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){

        cin>>n>>k;
        for(int i=0; i<=n; i++) cin>>a[i];

        int lo = 0, hi = 1e6, mid = 0;
        int ans = 0;
        while(lo<=hi)
        {
            mid = (lo+hi)/2;
            if(ok(mid)){
                hi = mid-1; 
                ans = mid;
            }
            else
                lo = mid+1;
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
        printAns(ans);
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}