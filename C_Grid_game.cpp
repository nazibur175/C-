#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int x=0;
    int y=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cout<<1<<" "<<y+1<<endl;
            y=(y+1)%4;
        }
        else {
            cout<<3<<" "<<x+1<<endl;
            x=(x+2)%4;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}