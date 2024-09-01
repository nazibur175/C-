#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int x;
        cin>>x;
        int ans=1;
        set<int>s;
        s.insert(1);
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            set<int>temp;
            if(x%val!=0 || val>x) 
                continue;
             for(auto it:s){
                 if(it*val<=x && x%(it*val)==0){
                     temp.insert(it*val);
                     if(it*val==x){
                         ans++;
                        s.clear();
                        temp.clear();
                        temp.insert(val);
                        temp.insert(1);
                        break;
                     }
                 }
             }
            for(auto it:temp) s.insert(it);
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