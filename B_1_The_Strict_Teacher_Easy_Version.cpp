#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while (q--)
        {
            int pos;
            cin>>pos;
            auto it = lower_bound(v.begin(),v.end(),pos);
            if(it!=v.end()){
                int in = lower_bound(v.begin(),v.end(),pos)-v.begin();
                int pre=in-1;
                if(in==0){
                    cout<<v[0]-1<<endl;
                }
                else {
                    cout<<(v[in]-v[pre])/2<<endl;
                }
            }
            else{
                cout<<n-v.back()<<endl;
            }
            
            
            

        }
        

        // int pos;
        // cin>>pos;
        // int ans=0;
        // if(pos<v[0]){
        //     ans=v[0]-1;
        // }
        // else if(pos>v[1]){
        //     ans=n-v[1];
        // }
        // else {
        //     ans= (v[1]-v[0])/2;
        // }
        // cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}