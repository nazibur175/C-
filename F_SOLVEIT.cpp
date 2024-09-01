#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    //cin>>n>>q;
    scanf("%lld%lld",&n,&q);
    set<int>m;
    while (q--)
    {
        int x,y;
        //cin>>x>>y;
        scanf("%lld%lld",&x,&y);
        if(x==1){
            m.insert(y);
        }
        else {
            auto lower = m.lower_bound(y);
            if(lower==m.end()) printf("-1\n");
            else{
                //cout<<*lower<<endl;
                printf("%lld\n",*lower);
            }
        }
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}