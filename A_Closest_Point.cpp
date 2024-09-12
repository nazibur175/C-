#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        set<int>s;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        if(s.size()>=3) cout<<"NO"<<endl;
        else {
            int x= *s.begin();
            s.insert(x+1);
            if(s.size()==3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}