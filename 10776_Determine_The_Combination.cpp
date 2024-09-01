#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int n;
vector<string>anss;
map<int,string>m;
string cal(int pos,string ans=""){
    
    if(pos>s.size()-1 || ans.size()>=n){
        if(ans.size()==n){
            return ans;
        }
        return "#";
    }
    string ans1="#";
    string ans2="#";
    ans1 = cal(pos+1,ans);
    if(ans.size()<=1 || (ans.size()>0 && ans.back()<=s[pos])){
    ans.push_back(s[pos]);
    ans2 = cal(pos+1,ans);
    }
    if(ans1.size()==n && ans1!="#") anss.push_back(ans1);
    if(ans2.size()==n && ans2!="#") anss.push_back(ans2);
    return "1";
}
void solve(){
    while (cin>>s>>n)
    {
        anss.clear();
        string ans=cal(0,"");
        sort(anss.begin(),anss.end());
        for(auto x:anss) cout<<x<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}