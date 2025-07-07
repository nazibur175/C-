#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b && (a^1)==b){
            cout<<y<<endl;
        }
        else if(a<b){
            int ans=0;
            //int f=0;
            while(a!=b){
                 if(a%2==0 && y<x ){
                     a++;
                     ans+=y;
                     //f=1;
                     continue;
                 }
                ans+=x;
                a++;
            }
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}