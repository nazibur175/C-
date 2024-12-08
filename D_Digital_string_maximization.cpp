#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        for(int i=1;i<s.size();i++){
            int ii=i;
            while(1 && ii>0){
                int dig = s[ii]-'0';
                int prev = s[ii-1]-'0';
                if((dig-1)>prev && (dig-1)>0){
                    s[ii]=prev+'0';
                    s[ii-1]=dig-1+'0';
                    ii--;
                }
                else{
                    break;
                }
            }
        }
        cout<<s<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}