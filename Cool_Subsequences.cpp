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
        map<int,int>m;
        int f=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        for(auto x:m){
            if(x.second>=2){
                cout<<1<<endl;
                cout<<x.first<<endl;
                f=1;
                break;
            }

        }
        if(f==0) cout<<"-1"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}