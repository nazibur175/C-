#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        s="#"+s;
        int n=s.size();
        map<int,int>m;
        for(int i=1;i<=n-3;i++){
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
                m[i]=1;
            }
        }
        int q;
        cin>>q;
        while(q--){
            int in;
            char ch;
            cin>>in>>ch;
            s[in]=ch;
            for(int i=max(1ll,in-3);i<=min(n-3,in);i++){
                if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
                    m[i]=1;
                }
                else{
                    //m[i]=0;
                    if(m.find(i)!=m.end())
                    m.erase(i);
                }
            }
            if(m.size()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}