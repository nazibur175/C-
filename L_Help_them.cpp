#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>m;
        int l=1e18;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            l=min(l,x);
        }
        while(1){
            if(m[l]==0){
                cout<<l<<endl;
                break;
            }
            l++;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}