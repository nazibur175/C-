#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1){
            cout<<"OK"<<endl;
        }
        else 
            cout<<s<<m[s]-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}