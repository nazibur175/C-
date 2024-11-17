#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
set<int> se;
void cal(int pos,string s){
    if(pos>=10){
        if(s.size())
        se.insert(stoll(s));
        return;
    }
    cal(pos+1,s+"4");
    cal(pos+1,s+"7");
    cal(pos+1,s);
    //cout<<s<<endl;
}
void solve(){
    int n;
    cin>>n;
    cal(0,"");
  
    int cnt=0;
    for(auto i:se){
        if(i==n){
            cout<<cnt+1<<endl;
            return;
        }
        cnt++;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}