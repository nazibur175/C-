#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        s.pop_back();
        string ss;
        for(int i=1;i<s.size();i++){
            ss.push_back(s[i]);
        }
        int f=1;
        if(ss.size()==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            int sum=0;
            for(int i=0;i<ss.size();i++){
                if(ss[i]=='(') sum++;
                else sum--;
                if(sum<0){
                    f=0;
                    break;
                }
            }
            if(f) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}