#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        //sort(v.begin(),v.end());
        vector<int>pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }

        vector<int>premax(n);
        premax[0]=v[0];
        for(int i=1;i<n;i++){
            premax[i]=max(premax[i-1],v[i]);
        }
        int vv[q];
        for(int i=0;i<q;i++) cin>>vv[i];
        for(int i=0;i<q;i++){
            int x=vv[i];
            int in= upper_bound(premax.begin(),premax.end(),x)-premax.begin();
            if(in-1>=0)
            cout<<pre[in-1]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}