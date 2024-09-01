#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int x=s.size()/6;
        int y=s.size()%6;
        int w=0;
        int r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='W') w++;
            else r+=(s[i]-'0');
        }
        if(x>=1 && y>0)
        printf("%lld.%lld Overs ",x,y);
        else 
        printf("%lld.%lld Over ",x,y);

        if(r>1)
        printf("%lld Runs ",r);
        else 
        printf("%lld Run ",r);

        if(w>1)
        printf("%lld Wickets.\n",w);
        else 
        printf("%lld Wicket.\n",w);



        //printf("%lld.%lld Overs %lld Runs %lld Wicket.\n",x,y,r,w);
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}