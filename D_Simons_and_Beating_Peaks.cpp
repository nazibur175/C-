#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int>st;
        int pre[n+1];
        for(int i=0;i<n;i++){
            while(st.size() && a[st.top()]<a[i]) st.pop();
            st.push(i);
            pre[i]=st.size();
        }
        int suf[n+1];
        stack<int>stt;
        for(int i=n-1;i>=0;i--){
            while(stt.size() && a[stt.top()]<a[i]) stt.pop();
             stt.push(i);
            suf[i]=stt.size();
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,pre[i]+suf[i]-1);
        }
        cout<<n-ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}