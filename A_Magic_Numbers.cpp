#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    s+="    ";
    int yes=1;
    for(int i=0;i<n;i++){
        if(i+2<=(n-1) && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=2;
        }
        else if(i+1<=(n-1) && s[i]=='1' && s[i+1]=='4'){
            i++;
        }
        else if(s[i]=='1'){
            continue;
        }
        else {
            yes=0;
            break;
        }
        
    }
    if(yes)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}