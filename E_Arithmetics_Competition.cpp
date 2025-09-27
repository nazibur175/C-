#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int pre_a[n+1]={0};
        int pre_b[m+1]={0};
        for(int i=0;i<n;i++) pre_a[i+1]=pre_a[i]+a[i];
        for(int i=0;i<m;i++) pre_b[i+1]=pre_b[i]+b[i];

        while(q--){
            int ai,bi,zi;
            cin>>ai>>bi>>zi;
            int l=0, r=min(ai,zi)+1;
            while (r-l>1)
            {
                int mid = (l+r)/2;
                int ok=0;
                int ex=zi-mid;
                if(ex>=bi){
                    ok=1;
                }
                else if(ex<bi && a[mid-1]>b[ex]){
                    ok=1;
                }
                if(ok){
                    l=mid;
                }
                else{
                    r=mid;
                } 
            }
            int first=l;
            int second=zi-first;
            //cout<<first<<" "<<second<<'\n';
            cout<<pre_a[first]+pre_b[second]<<'\n';
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}