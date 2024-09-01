#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int pos;
        cin>>pos;
        pos--;
        int curlen=s.size();
        int ok = pos<s.size();
        s+='A';
        vector<char>v;
        for(auto c:s){
        while (!ok && v.size() && v.back()>c )
        {
            pos-=curlen;
            curlen--;
            v.pop_back();
            if(pos<curlen) ok=1;
        }
        v.push_back(c);
        }
        cout<<v[pos];
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}