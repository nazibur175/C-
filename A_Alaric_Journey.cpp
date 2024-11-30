#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    deque<int>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    int ans=0;
    while ((d.size()>1))
    {
        if(d.front()==d.back()){
            d.pop_front();
            d.pop_back();
        }
        else if(d.front()>d.back()){
            int x=d.back();
            d.pop_back();
            d.back()+=x;
            ans++;
        }
        else{
            int x=d.front();
            d.pop_front();
            d.front()+=x;
            ans++;
        }
    }
    cout<<ans<<endl;
    
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}