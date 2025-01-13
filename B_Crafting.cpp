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
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++) cin>>b[i];

        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(a[i]-b[i]);
        }
        sort(v.begin(),v.end());
        if(v[0]<0 && v[1]<0){
            cout<<"NO"<<endl;
        }
        else{
            int x=v[0];
            int f=1;
            for(int i=1;i<n;i++){
                if(x*(-1)>v[i]){
                    f=0;
                    break;
                }
            }
            if(f) cout<<"YES"<<endl;
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