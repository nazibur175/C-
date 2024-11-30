#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,L;
        cin>>n>>m>>L;
        deque<pair<int,int>>d;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            d.push_back({l,r});
        }
        deque<pair<int,int>>dd;
        for(int i=0;i<m;i++){
            int l,r;
            cin>>l>>r;
            dd.push_back({l,r});
        }
        int ans=0;
        multiset<int>ms;
        int lagbe=0ll;
        int ache=0ll;
        int f=1;
        for(auto x:d){
            while((!dd.empty()) && (dd.front().first<=x.first)){
                ms.insert(dd.front().second);
                dd.pop_front();
            }
            lagbe=max(lagbe,( x.second-x.first+1ll));
            while ((!ms.empty()) && ache < lagbe) {
                auto it = prev(ms.end()); 
                int val = *it;            
                ms.erase(it);            
                ache += val;              
                ans++;
            }   
            if(ache<lagbe){
                f=0;
                break;
            }
        }
        if(f){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}