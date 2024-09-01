#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
     map<int,int>m,mul;
    test{
        char ch;
        int n;
        cin>>ch>>n;
       
        m[0]++;
        if(ch=='+'){
            m[n]++;
        }
        else if(ch=='?'){
            while (m[mul[n]*n]) mul[n]++;
            cout<<mul[n]*n<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}