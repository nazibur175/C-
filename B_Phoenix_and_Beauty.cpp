#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        // int v[n+9];
        vector<int>v;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        if(s.size()>k){
            cout<<"-1"<<endl;
        }
        else {
            vector<int>ans;
            for(auto x:s){
                ans.push_back(x);
            }
            //cout<<"Set size= "<<ans.size()<<" k= "<<k<<endl;
            int x=ans.size();
            for(int i=x;i<k;i++){
               ans.push_back(1);
               //cout<<"x"<<endl;
                
            }
            cout<<n*k<<endl;
            //cout<<"After "<<ans.size()<<endl;
            for(int i=0;i<n;i++){
                for(auto x:ans){
                    cout<<x<<" ";
                }
            }
            cout<<endl;
        }



    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}