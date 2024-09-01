#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int zero=-1;
        int one =-1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] && s[i]=='1')
                {
                    one = i;
                    break;
                }
        }
        for(int i=s.size()-1;i>0;i--){
            if(s[i]==s[i-1] && s[i]=='0'){
                zero = i;
                break;
            }
        }
        //cout<<zero<<endl;
        //cout<<one<<endl;
        if(zero==-1 || one ==-1) cout<<"YES"<<endl;
        else if(zero < one) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}