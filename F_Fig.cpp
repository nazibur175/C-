#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    multiset<int>s;
    for(int i=0;i<=31;i++){
        if((n&(1<<i))){
            int x = 1<<i;
            // ans.push_back(x);
            s.insert(x);
        }
    }
    
    while (s.size()<k && *(--s.end())!=1)
    {
        int x = *(--s.end());
        s.erase(--s.end());
        s.insert(x/2);
        s.insert(x/2);
    }
     if(s.size()==k){
        cout<<"YES"<<endl;
        for(auto x:s) cout<<x<<" ";
     }
     else cout<<"NO"<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}