#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int  a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int len= sqrt(n)+1;
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        b[i/len]+=a[i];
    }
    int q;
    cin>>q;
    
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int ans=0;
        for(int i=l;i<=r;){
            if(i%len==0 && (i+len-1)<=r){
                ans+=b[i/len];
                i+=len;
            }
            else {
                ans+=a[i];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}