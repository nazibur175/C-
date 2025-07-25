#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        set<char> st;
        for(auto c : s){
            //if(c!='0')
            st.insert(c);
        }
        for(auto c:st){
            cout<<c<<endl;
            break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}