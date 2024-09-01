#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        string str=s;
        map<char,int>m;
        if(is_sorted(str.begin(),str.end())){
            cout<<0<<endl;
        }
        else {
            char cur=s.back();
            vector<int>in;
            vector<char>v;
            for(int i=n-1;i>=0;i--){
                m[s[i]]++;
                if(s[i]>=cur){
                    v.push_back(s[i]);
                    in.push_back(i);
                    cur=s[i];
                }
            }
            reverse(in.begin(),in.end());
            for(int i=0;i<v.size();i++){
                s[in[i]]=v[i];
            }
            if(is_sorted(s.begin(),s.end())){
             char ch=*max_element(s.begin(),s.end());
             cout<<v.size()-m[ch] <<endl;
            }
            else cout<<-1<<endl;

        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}