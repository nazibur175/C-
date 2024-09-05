#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++)cin>>a[i];
        int pre[n+5]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }


        string s;
        cin>>s;
        deque<int>start;
        deque<int>end;
        // L-----R
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='L') start.push_back(i+1);
        }
        for(int i=s.size()-1;i>=0;i--){
           
            if(s[i]=='R') end.push_back(i+1);
        }
        int ans=0;
        while (start.size() && end.size())
        {
            int l=start.front();
            int r=end.front();
            if(l<r){
                ans+= (pre[r]-pre[l-1]);
            }
            start.pop_front();
            end.pop_front();
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