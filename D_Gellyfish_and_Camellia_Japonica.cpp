#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> b(q+1),c(q+1),d(q+1);
        for(int i=1;i<=q;i++){
            cin>>b[i]>>c[i]>>d[i];
        }
        auto u=a;
        for(int i=q;i>=1;i--){
            int temp=u[d[i]];
            u[d[i]]=-1;
            u[b[i]]=max(u[b[i]],temp);
            u[c[i]]=max(u[c[i]],temp);
        }
        for(int i=1;i<=n;i++){
            if(u[i]==-1) u[i]=a[i];
        }
        auto temp=u;
        for(int i=1;i<=q;i++){
            temp[d[i]]=min(temp[b[i]],temp[c[i]]);
        }
        if(temp==a){
            for(int i=1;i<=n;i++){
                cout<<u[i];
                if(i<n) cout<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}