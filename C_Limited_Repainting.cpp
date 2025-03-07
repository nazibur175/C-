#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
string s;
int ok(int mid, int a[]){
    string ss;
    for(int i=0;i<n;i++){
        if(a[i]>mid) ss.push_back(s[i]);
    }

    int cnt=0;
    for(int i=0;i<ss.size();i++){
        if(cnt==0 && ss[i]=='B') cnt++;
        else if(ss[i]=='B' && ss[i-1]=='R') cnt++;
    }
    return cnt<=k;

}
void solve(){
    test{
        cin>>n>>k;
        cin>>s;
        int a[n];
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        int l=-1;
        int r=mx;
        while (r-l>1)
        {
            int mid= (l+r)/2;
            if(ok(mid,a)){
                r=mid;
            }
            else {
                l=mid;
            }
        }
        cout<<r<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}