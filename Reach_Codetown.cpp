#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int c=0;
        int d=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                c++;
                v.push_back(i);
            }
            else d++;
        }
        if(c==3 && d==5 && v[0]==1 && v[1]==3 && v[2]==5) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}