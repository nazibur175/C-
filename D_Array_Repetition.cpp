#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e18;
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        int sz=0;
        vector<int>v;
        map<int,int>m;
        while (n--)
        {
            int x,nn;
            cin>>x>>nn;
            if(sz>=N) continue;
            if(x==1){
                sz++;
                m[sz]=nn;
                v.push_back(sz);
            }
            else {
                //overflow handle
                if(sz>(N/(nn+1))) {
                    sz=N;
                    continue;
                }
                 sz=sz*(nn+1);
                 v.push_back(sz);
            }
        }
        while (q--)
        {
            int in;
            // 1 based
            cin>>in;
            if(m[in]){
                cout<<m[in]<<" ";
                continue;
            }
            while (m[in]==0)
            {
                    int tempin= lower_bound(v.begin(),v.end(),in)-v.begin();
                    tempin--;
                    in=(in%v[tempin])==0  ?  v[tempin]:(in%v[tempin]);
            }
            cout<<m[in]<<" ";
            
        }
            cout<<endl;
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}