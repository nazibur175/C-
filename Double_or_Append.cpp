#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int q;
        cin>>q;
        int copy=0;
        int ans=0;
        int sz=1;
        int f=0;
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            if(x==1){
                ans+=sz;
                sz++;
            }
            else{
                int temp=ans;
                ans=ans*3;
                ans+=copy;
                copy=temp;
                sz=sz*2;
            }
            cout<<ans;
            if(i!=q-1) cout<<" ";
        }
        cout<<"\n";
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}