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
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
            else {
                if(cnt>0){
                    s[i]=')';
                    cnt--;
                }
                else{
                    s[i]='(';
                    cnt++;
                }

            }
        }

        deque<pair<char,int>>d;
        int ans=0;
        for(int i=0;i<n;i++){
            d.push_back({s[i],i});
            if(d.back().first==')'){
                ans +=d.back().second;
                d.pop_back();
                ans -=d.back().second;
                d.pop_back();
            }
        }
        cout<<ans<<endl;

        //cout<<s<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}