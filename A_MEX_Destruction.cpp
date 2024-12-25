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
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0 && ans==0){
                ans=1;
            }
            else if(a[i]==0 && ans==1){
                ans=2;
            }
            else if(a[i]!=0 && ans==2){
                ans=3;
            }
        }
        if(ans==0)
            cout<<0<<endl;
        else if(ans==1 || ans==2)
            cout<<1<<endl;
        else cout<<2<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}