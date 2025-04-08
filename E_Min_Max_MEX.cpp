#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
int cal(int mid, vector<int>&v){
    int cnt=0;
    set<int>s;
    for(auto x:v){
        if(x<mid){
            s.insert(x);
        }
        if(s.size()==mid){
            cnt++;
            s.clear();
        }
    }
    return cnt>=k;
}
void solve(){
    test{
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0;
        int r=n+1;
        while(r-l>1){
            int mid=(l+r)/2;
            if(cal(mid,v)){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}