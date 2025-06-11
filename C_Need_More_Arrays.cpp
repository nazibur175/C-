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
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i==0)v.push_back(a[i]);
            if((v.back()+1)<a[i]){
                v.push_back(a[i]);
            }
        }
        cout<<v.size()<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}