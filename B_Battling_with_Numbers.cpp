#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int>ma;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ma[a[i]]=x;
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    map<int,int>mb;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        mb[b[i]]=x;
    }
    int f=1;
    for(int i=0;i<m;i++){
        if(ma[b[i]]<mb[b[i]]){
            f=0;
            break;
        }
    }
    if(!f){
        cout<<0<<endl;
    }
    else{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(ma[a[i]]>mb[a[i]]) cnt++;
        }
        int ans=1;
        for(int i=1;i<=cnt;i++){
            ans= (ans*2)%mod;
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