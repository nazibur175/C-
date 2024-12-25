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
        int cntp=0;
        int cnts=0;
        for(int i=0;i<n;i++){
            if(s[i]=='s') cnts++;
            else if(s[i]=='p') cntp++;
        }
        if(cnts==0)cout<<"YES"<<endl;
        else if(cntp==0) cout<<"YES"<<endl;
        else if(cntp==1 && s.back()=='p') cout<<"YES"<<endl;
        else if(cnts==1 && s.front()=='s') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}