#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+5]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    stack<int>st;
    st.push(0);
    vector<int>ans;
    for(int i=1;i<=n;i++){
        while (a[st.top()]>=a[i])
        {
           st.pop();
        }
        ans.push_back(st.top());
        st.push(i);
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}