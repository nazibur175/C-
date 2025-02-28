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
        int cntmdl=0;
        int side=0;
        for(int i=0;i<n;i++){
            if(s[i]=='_') cntmdl++;
            else side++;
        }
        int half1 = side/2;
        int half2 = side-half1;
        cout<<half1*half2*cntmdl<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}