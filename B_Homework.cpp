#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int sq(string s){
    if(s.empty() || s[0]=='0') return 0;
    int n=stoi(s);
    int temp = sqrtl(n);
    return temp*temp==n;
}
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        // bitmask
        int ans=0;
        int f=0;
        for(int i=0;i<(1<<n);i++){
            string st;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    st.push_back(s[j]);
                }
            }
            if(sq(st)){
                int x=st.size();
                ans = max(ans, x);
                f=1;
            }
            
        }
        if(!f) cout<<"-1"<<endl;
        else cout<<n-ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}