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
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1) cout<<"NO"<<endl;
        //else if(s.size()>=5) cout<<"YES"<<endl;
        else if(n>=5) cout<<"YES"<<endl;
        else{
                if(a[0]+a[1]!=a[2]+a[3]) cout<<"YES"<<endl;
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