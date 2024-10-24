#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int n;
int ok(vector<int>&v,vector<int>vv, int mid){
    // l for toys
    // r for box
    vv.push_back(mid);
    sort(vv.begin(),vv.end());
    int l=n-1;
    int r=n-1;
    int cnt=0;
    int sz=0;
    while (l>=0 && r>=0)
    {
        if(v[l]<=vv[r]){
            l--;
            r--;
        }
        else {
           //sz=v[l];
           l--;
           cnt++;
        }
    }
    if(cnt) return 0;
    //else if(sz>mid) return 0;
    else return 1;
}

// 2 3 
// 2 
void solve(){
    
    cin>>n;
    vector<int>v(n);
    vector<int>vv(n-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>vv[i];
    }

    sort(v.begin(),v.end());
    //sort(vv.begin(),vv.end());

    int l=0;
    int r=*max_element(v.begin(),v.end())+5;
    //cout<<r<<endl;

    while (r-l>1)
    {
        int mid=(l+r)/2;
        if(ok(v,vv,mid)){
            r=mid;
        }
        else {
            l=mid;
        }
    }
    if(ok(v,vv,r)) cout<<r<<endl;
    else cout<<-1<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}