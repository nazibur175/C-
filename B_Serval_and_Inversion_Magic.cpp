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
        int x=n/2;
        vector<char>sa;
        vector<char>sb;
        for(int i=0;i<x;i++){
            sa.push_back(s[i]);
        }
        int y=x+n%2;
        for(int i=n-1;i>=y;i--){
            sb.push_back(s[i]);
        }
        //cout<<"----------"<<endl;
        // for(auto ch:sa){
        //     cout<<ch;
        // }
        // cout<<endl;
        // for(auto ch:sb){
        //     cout<<ch;
        // }
        //cout<<endl;
        n=sa.size();
        int start=0;
        int end=n-1;
        for(int i=0;i<n;i++){
            if(sa[i]==sb[i]) start++;
            else 
            break;
        }
        for(int i=n-1;i>=0;i--){
            if(sa[i]==sb[i]) end--;
            else break;
        }
        if(start>=end) cout<<"YES"<<endl;
        else {
            string ssa="";
            string ssb="";
            for(int i=start;i<=end;i++){
                ssa+=sa[i];
                if(sb[i]=='0')
                ssb+='1';
                else ssb+='0';
            }
            if(ssa==ssb) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            //cout<<ssa<<endl;
            //cout<<ssb<<endl;
        }
            //cout<<"----------"<<endl;
        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}