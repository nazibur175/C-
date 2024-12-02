#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    //v -vowel
    //c -consonant
    //g
    //n
    //y
    int v=0,c=0,g=0,n=0,y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v++;
        }
        else if(s[i]=='G'){
            g++;
        }
        else if(s[i]=='N'){
            n++;
        }
        else if(s[i]=='Y'){
            y++;
        }
        else{
            c++;
        }
    }
    int ans=0;
    for(int i=0;i<=min(n,g);i++){
        // i is the number of G used as NG
        for(int j=0;j<=y;j++){
            // j is the number of Y used as vowel
            int vow= v+j;
            if(i > 2*vow) continue;
            // for 1 vowel maximum 2 additional G can be used
            int cnt = (n+g-i)+c+y-j;
            ans = max(ans,i+3*min(vow,cnt/2));
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}