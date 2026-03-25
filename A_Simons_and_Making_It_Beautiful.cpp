#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mx=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
            if(mx==i+1) cnt++;
        }
        if(cnt==1){
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else {
            for(int i=0;i<n;i++){
                if(a[i]==n) swap(a[0],a[i]);
            }
             for(int i=0;i<n;i++) cout<<a[i]<<" ";
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