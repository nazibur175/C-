#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int f=0;
        set<pair<int,int>>s;
        //small big
        
        s.insert({min(a,b),max(a,b)});
        if(a%2==0){
            int x=a/2;
            int y=b*2;
            s.insert({min(x,y),max(x,y)});
        }
        if(b%2==0){
            int x=a*2;
            int y=b/2;
            s.insert({min(x,y),max(x,y)});
        }
        if(s.size()>=2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}