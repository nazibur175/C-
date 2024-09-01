#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve (char a, char b){
    int cnt =0;
    while (a!=b)
    {
        a+=3;
        if(a>90){
            a=a-26;
        }
        cnt++;
    }
    return cnt;
    
}
void solve(){
    test{
        int n;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        vector<int>v(n);
        for(int i=0;i<s.size();i++){
        v[i]=solve(s[i],ss[i]);
    }
    for(auto x:v) cout<<x<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}