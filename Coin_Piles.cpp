#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        // a=big
        // b=small
        if(a<b) swap(a,b);
        int diff=a-b;
        int ans=0;
        a-=diff*2;
        b-=diff;
        if(a%3==0 && a>=0 && b>=0 ){
            ans=1;
        }
        if((a==0 && b) || (b==0 && a)) ans=0;
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}