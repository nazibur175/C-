#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal(string s){
    int cnt=2;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) cnt++;
        else cnt+=2;
    }
    return cnt;
}
void solve(){
    test{
        string s;
        cin>>s;
        string ans;
        int mx = 0;
        for(int i=0;i<s.size();i++){
            string temp="" ;
            for(int j=0;j<s.size();j++){
                if(i==j){
                    temp=temp + "#"+ s[j];
                }
                else temp=temp + s[j];
            }
            int x = cal(temp);
            if(x>mx) {
                ans = temp;
                mx=max(mx,x);
            }

        }

        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }

        char ch;
        for(int i=0;i<26;i++){
            char t='a'+i;
            if(m[t]==0){
                ch = t;
                break;
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='#'){
                ans[i]=ch;
                break;
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}