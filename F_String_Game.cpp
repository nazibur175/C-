#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// array,n, mid, string ss
int ok(int a[],int n,int in,string s,string ss){
     vector<int>temp;
     for(int i=1;i<=in;i++){
         temp.push_back(a[i]);
     }
      sort(temp.begin(),temp.end());
      int ssin=0;
      string sss;
      for(int i=1;i<=n;i++){
            if(binary_search(temp.begin(),temp.end(),i)) continue;
            else if(s[i-1]==ss[ssin]){
                //sss+=s[i-1];
                sss.push_back(ss[ssin]);
                ssin++;
            }
            if(sss==ss){
                return 1;
                break;
            }
      }
     return 0;
}
void solve(){
    string s;
    cin>>s;
    string ss;
    cin>>ss;
    int n=s.size();
    int a[n+9];
    for(int i=1;i<=n;i++) cin>>a[i];

    int l=1;
    int r=n;
    int ans=0;
    while (l<r)
    {
        int mid=(l+r)/2;
        if(ok(a,n,mid,s,ss)){
            ans=mid;
            l=mid+1;
        }
        else r=mid;
    }
    cout<<ans<<endl;
    //cout<<l-1<<endl;
    //cout<<ok(a,n,l,s,ss)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}