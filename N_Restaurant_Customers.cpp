#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=4e5+9;
int a[N+1];
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back({l,r});
        m[l]++;
        m[r]++;
    }
    map<int,int>ind;
    int cnt=0;
    for(auto x:m){
        cnt++;
        ind[x.first]=cnt;
    }
    
    for(auto x:v){
        int left = ind[x.first];
        a[left]++;
        int right = ind[x.second];
        a[right+1]--;
    }
    int ans=0;
    int pre=0;
    for(int i=1;i<N;i++){
        pre+=a[i];
        ans=max(ans,pre);
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}