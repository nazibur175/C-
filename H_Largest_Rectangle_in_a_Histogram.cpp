#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    while (cin>>n,n)
    {
        vector<int>v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];

        int left[n+1]={0};
        stack<int>st;
        for(int i=1;i<=n;i++){
            while (st.size() && v[st.top()]>=v[i])
            {
                st.pop();
            }
            int left_in=0;
            if(st.size()) left_in=st.top();
            left[i]=i-left_in;
            st.push(i);
        }

        int right[n+1]={0};
         stack<int>stt;
         for(int i=n;i>=1;i--){
            while (stt.size() && v[stt.top()]>=v[i])
            {
                stt.pop();
            }
            int right_in=n+1;
            if(stt.size()) right_in=stt.top();
            right[i]=right_in-i;         
            stt.push(i);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans, v[i]*(left[i]+right[i]-1));
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