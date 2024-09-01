#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int a[n+9]={0};
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            a[i+1]=1;
        }
    }
    // cout<<"main array"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;

    int pre[n+9]={0};
    pre[0]=a[0];
    for(int i=1;i<=n;i++)
    pre[i]=pre[i-1]+a[i];

    // cout<<"Pre array"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<pre[i];
    // }
    // cout<<endl;

    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==1)
            cout<<pre[r]<<endl;
        else {
            //cout<<pre[r]-pre[l-1]<<endl;
            int ans=pre[r]-pre[l-1];
            if(a[l]==1) ans--;
            cout<<ans<<endl;
        }
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}