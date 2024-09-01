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
        int c=0;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            m[x]++;
            if(m[x]==2) c++;
        }
        cout<<c<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}