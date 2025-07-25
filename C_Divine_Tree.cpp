#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        if((n*(n+1))/2 < m) {
            cout<<"-1\n";
            continue;
        }
        vector<int>temp;
        int ache=m;
        int cur=n;
        int aro_node=n;
        map<int,int>mp;
        while(ache>0 && cur>0 && aro_node>0) {
            if(ache>=cur && (ache-cur)>=aro_node-1) {
                temp.push_back(cur);
                mp[cur]++;
                aro_node--;
                ache-=cur;
                cur--;
            } 
             else {
                cur--;
            }
        }
        if(ache!=aro_node) {
            cout<<"-1\n";
            continue;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                temp.push_back(i);
            }
        }
        int mn=temp.front();
        int total=mn;
        for(int i=1;i<temp.size();i++){
            mn=min(mn,temp[i]);
            total+=mn; 
        }
        // cout<<total<<"\n";
        if(total!=m) {
            cout<<"-1\n";
            continue;
        }
        cout<<temp.front()<<"\n";
        for(int i=0;i<temp.size()-1;i++){
            cout<<temp[i]<<" "<<temp[i+1]<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}