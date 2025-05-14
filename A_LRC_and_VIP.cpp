#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a(n);
        int mx=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            mp[a[i]]++;
        }
        if(mp[mx]==n) cout<<"No"<<endl;
        else {
            cout<<"Yes"<<endl;
            int f=0;
            for(int i=0;i<n;i++){
                if(a[i]==mx && f==0) {
                    cout<<1;
                    f=1;
                }
                else cout<<2;
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}