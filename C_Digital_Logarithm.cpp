#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>va(n),vb(n);
        for(int i=0;i<n;i++) cin>>va[i];
        for(int i=0;i<n;i++) cin>>vb[i];

        priority_queue<int>pa(va.begin(),va.end());
        priority_queue<int>pb(vb.begin(),vb.end());
        int ans=0;
        while (pa.size())       
        {
            if(pa.top()==pb.top()){
                pa.pop();
                pb.pop();
                continue;
            }
            ans++;
            if(pa.top()>pb.top()){
                pa.push(to_string(pa.top()).size());
                pa.pop();
            }
            else {
                pb.push(to_string(pb.top()).size());
                pb.pop();
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