#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        set<int>a;
        set<int>b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.insert(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.insert(x);
        }
        if(a.size()>=3 || b.size()>=3) cout<<"YES"<<endl;
        else if(a.size()==2 && b.size()==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}