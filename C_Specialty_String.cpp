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
        string s;
        cin>>s;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.size() && st.top()==s[i]){
                st.pop();
            }
            else st.push(s[i]);
        }
        if(st.size()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}