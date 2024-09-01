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
        map<char,int>m;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(m[s[i]]==0) cnt+=2;
            else cnt+=1;
            m[s[i]]=1;
        }
        cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}