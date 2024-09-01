#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,cnt;
    cin>>n>>cnt;
    // val in
    deque<int>d[n];
    multiset<pair<int,int>>s;
    for(int i=0;i<n;i++){
        int nn;
        cin>>nn;
        for(int j=0;j<nn;j++){
            int temp;
            cin>>temp;
            d[i].push_back(temp);
            if(j==0){
                s.insert({temp,i});
            }
            else if(j==nn-1){
                s.insert({temp,i});
            }
        }
    }

    int ans=0;
    while (cnt)
    {
        auto [val,in]= *(--s.end());
        ans+=val;
        cout<<val<<endl;
        s.erase(--s.end());
        if(d[in].front()==val){
            d[in].pop_front();
            s.insert({d[in].front(),in});
        }
        else{
            d[in].pop_back();
            s.insert({d[in].back(),in});
        }
        
        cnt--;
    }
    cout<<ans<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}