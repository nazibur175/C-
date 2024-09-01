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
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
    vector<pair<int,int>>v;
    for(auto x:m){
        if(x.second>=k){
            v.push_back({x.first,x.second});
        }
    }
    sort(v.begin(),v.end());
    int l=0;
    int r=0;
    int ans=0;
    int val=0;
    int ansl=0;
    int ansr=0;
    if(v.size()){
        l=r=val=ansl=ansr=v[0].first;
    }
    
    for(auto x:v){
        if(x.first==val && x.second>=k){
            val++;
            r=x.first;
            if(r-l>=ans){
            ans=max(ans,r-l+1);
            ansl=l;
            ansr=r;
            }
        }
        else {
            val=x.first+1;
            l=x.first;
            r=x.first;
        }
        
    }
    //cout<<ansl<<" "<<ansr<<endl;
    if(ans) cout<<ansl<<" "<<ansr<<endl;
    else cout<<-1<<endl;
    
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}