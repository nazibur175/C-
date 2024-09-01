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
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                x=i;
                break;
            }
        }
        int y=0;
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='B'){
                y=j;
                break;
            }
        }
        cout<<y-x+1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}