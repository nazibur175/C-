#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int aa=a;
        int bb=b;
        while (bb)
        {
            if(aa%bb==0) break;
            bb--;
            aa++;
        }
        //cout<<b<<endl;
        int ans1=b-bb;

        aa=a;
        bb=b;
        while (aa!=bb)
        {
            if(aa%bb==0 || aa<bb)break;
            aa--;
            bb++;
        }
        int ans2=INT64_MAX;
        if(aa%bb==0)
            ans2=a-aa;

        //cout<<ans1<<" "<<ans2<<endl;
        cout<<min(ans1,ans2)<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}