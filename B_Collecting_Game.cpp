#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v;
        vector<int>vv;
        vector<int>pre(n,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            vv.push_back(x);
        }
        sort(vv.begin(),vv.end());
        pre[0]=vv[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+vv[i];
        }

        map<int,int>m;
        for(int i=n-1;i>=0;i--){
            int temp=pre[i];
            int val= (upper_bound(vv.begin(),vv.end(),temp)-vv.begin()) - 1;
            if(pre[val]>pre[i]) val=m[vv[val]];
            m[vv[i]]=val;
        }
        for(auto x:v){
            cout<<m[x]<<" ";
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