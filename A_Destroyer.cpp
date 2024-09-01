#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[300]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        int f=1;
        int c=0;
        for(int i=250;i>=0;i--){
            if(a[i]<c){
               
                f=0;
                break;
            }
             c=max(c,a[i]);
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}