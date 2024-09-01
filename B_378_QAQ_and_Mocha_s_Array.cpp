#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        int f=1;
        int x=a[0];
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]%x !=0)v.push_back(a[i]);
        }
        if(v.size()!=0){
            x=v[0];
            for(auto xx:v){
                if(xx%x!=0) f=0;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}