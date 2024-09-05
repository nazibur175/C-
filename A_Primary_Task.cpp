#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    map<string,int>m;
    vector<string>v;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        v.push_back(s);
        m[s]++;
    }
    for(auto x:v){
        //cout<<x[0]<<endl;
        if(x.size()<3) {
            cout<<"NO"<<endl;
            continue;
        }
        string sub= x.substr(2);
        int xx= stoi(sub);
        //cout<<xx<<endl;
        
        if(x[0]=='1' && x[1]=='0' && x[2]!='0' && m[x]==1 && xx>=2 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}