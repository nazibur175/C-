#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int xa,ya,xb,yb,x,y;
            cin>>xa>>ya>>xb>>yb>>x>>y;
            int val = (x-xa)*(ya-yb) - (xa-xb)*(y-ya);
            
            if(val ==0 ) cout<<"TOUCH"<<endl;
            else if(val > 0) cout<<"LEFT"<<endl;
            else cout<<"RIGHT"<<endl;
        }
   

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}