#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s[1]-'0';
    char ch=s[0];
    char a[8]={'a','b','c','d','e','f','g','h'};
    for(int i=1;i<=8;i++){
        if(i!=n){
            cout<<ch<<i<<endl;
        }
    }
    for(int i=0;i<8;i++){
        if(a[i]!=ch){
            cout<<a[i]<<n<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
test{
    solve();
}

}