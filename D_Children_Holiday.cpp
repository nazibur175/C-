#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5;
int m,n;
// ti-per  zi-ta  yi-rest
int t[N],y[N],z[N];
vector<int>v;
int good(int x){
    v.clear();
    int tot=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        cnt+=x/((t[i]*z[i])+y[i]);
        cnt*=z[i];
        int extrati=x%((t[i]*z[i])+y[i]);
        cnt+=min(z[i],extrati/t[i]);
        tot+=cnt;
        v.push_back(cnt);
    }
    if(tot>=m) return 1;
    else return 0;
}
void solve(){
    //int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++) cin>>t[i]>>z[i]>>y[i];
    vector<int>ans;
    int l=0;
    //int r=1e7;
    int r=2;
    while (!good(r))
    {
        r=r*2;
    }
    
    while(l<=r) {
        int mid = (l+r)/2;
        if(good(mid)) {
            r = mid-1;
            ans=v;
        }
        else {
            l=mid+1;
        }
    }
    //cout<<r<<endl;
    if(m==0){
        cout<<"0"<<endl;
        for(int i=0;i<n;i++) cout<<"0"<<" ";
        cout<<endl;
    }

    else {
    cout<<r+1<<endl;
    int sum=0;
    for(auto x:ans) {
        if(sum+x<=m){
        cout<<x<<" ";
        sum+=x;
        }
        else{
            cout<<max(0LL,m-sum)<<" ";
            sum=m;
        }
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