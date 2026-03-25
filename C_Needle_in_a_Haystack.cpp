#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        string s,ss;
        cin>>s>>ss;

        map<char,int>ms,mss;
        for(auto x:s){
            ms[x]++;
        }
        for(auto x:ss){
            mss[x]++;
        }
        bool flag=true;
        for(auto x:ms){
            if(mss[x.first]<x.second){
                flag=false;
                break;
            }
            else {
                mss[x.first]-=x.second;
            }
        }
        if(flag==false){
            cout<<"Impossible\n";
            continue;
        }
        string temp;
        for(auto x:mss){
            for(int i=0;i<x.second;i++){
                temp.push_back(x.first);
            }
        }
        // sort(temp.begin(),temp.end());
        string res;
        int i1=0,i2=0;
        while(i1<temp.size() && i2<s.size()){
            if(temp[i1]<s[i2]){
                res.push_back(temp[i1]);
                i1++;
            }
            else {
                res.push_back(s[i2]);
                i2++;
            }
        }
        while(i1<temp.size()){
            res.push_back(temp[i1]);
            i1++;
        }
        while(i2<s.size()){
            res.push_back(s[i2]);
            i2++;
        }
        cout<<res<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}