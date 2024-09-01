#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a[100];
void solve(){
    test{
        memset(a,0,sizeof(a));
        int n;
        cin>>n;
        vector<int>v[n];
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int nn;
            cin>>nn;
            for(int j=0;j<nn;j++){
                int x;
                cin>>x;
                s.insert(x);
                a[x]++;
                v[i].push_back(x);
            }
        }
        // for(auto x:s){
        //     cout<<x<<" ";
        // }
        int ans=0;
        for(auto x: s){
            set<int>ss;
            int c=0;
            for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
            if(binary_search(v[i].begin(),v[i].end(),x)==0){
                for(auto y:v[i]){
                    ss.insert(y);
                }
            }
        }
        c=ss.size();
        ans=max(ans,c);
        }
        cout<<ans<<endl;

    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}