#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    s="#"+s;
    int n=s.size();
    stack<pair<char,int>>st;
    int ans=0;
    map<int,int>m;
    for(int i=1;i<=n;i++){
        if(st.size() && st.top().first=='(' && s[i]==')'){
            st.pop();
            int in=0;
            if(st.size()) in = st.top().second;
            int len = i-in;
            ans=max(ans,len);
            m[len]++;
        }
        else 
            st.push({s[i],i});
    }
    if(ans==0)
        cout<<"0 1"<<endl;
    else 
        cout<<ans<<" "<<m[ans]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}