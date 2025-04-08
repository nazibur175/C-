#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e18+5;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int mn=N;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
            m[a[i]]++;
        }
        if(m[mn]>1){
            cout<<"Yes"<<endl;
            continue;
        }
        vector<int> v;
        for(auto it:m){
            if(it.first%mn==0 && it.first!=mn){
                v.push_back(it.first/mn);
            }
        }
        int gc=0;
        for(auto it:v){
            gc=__gcd(gc,it);
        }
        if(gc==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}