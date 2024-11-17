#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<int>v;
        deque<int>vv;
        for(int i=0;i<n;i++){
            if(s[i]=='1') v.push_back(i+1);
            else vv.push_back(i+1);
        }
        //cout<<v.size()<<endl;
        int ans=0;
        while (v.size() || vv.size()){
          if(vv.empty()){
                ans+=v.front();
                v.pop_back();
                if(v.size())
                v.pop_front();
            }
            else if(v.empty() || v.back()<vv.back()){
                ans+=vv.back();
                vv.pop_back();
            }
            else if(v.size()==1){
                for(auto x:vv) ans+=x;
                v.clear();
                vv.clear();
            }
            else {
                ans+=vv.back();
                vv.pop_back();
                v.pop_back();
            }
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