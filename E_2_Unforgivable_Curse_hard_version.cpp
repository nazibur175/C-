#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s,ss;
        cin>>s>>ss;
        string a=s;
        string b=ss;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b) {
            cout<<"NO"<<endl;
            continue;
        }
        int f=1;
        for(int i=0;i<n;i++){
            if(s[i]==ss[i]) continue;
            else if(i+k<n || i-k>=0) continue;
            else{
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}