#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n==0){
            cout<<"YES"<<endl;
            continue;
        }
        if((n&(n - 1)) == 0){
            cout<<"NO"<<endl;
            continue;
        }
        
        while(n%2==0){
            n/=2;
        }
        string s="";
        while(n){
            s+=to_string(n%2);
            n/=2;
        }
        string t=s;
        reverse(t.begin(),t.end());
        if(s.size()%2==1 && s[s.size()/2]=='1'){
            cout<<"NO"<<endl;
            continue;
        }
        if(s==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}