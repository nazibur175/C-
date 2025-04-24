#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n; 
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        int odd1=0;
        int even1=0;
        int odd0=0;
        int even0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i%2==0){
                    even1++;
                }
                else{
                    odd1++;
                }
            }
            if(ss[i]=='0'){
                if(i%2==0){
                    even0++;
                }
                else{
                    odd0++;
                }
            }
        }
        if(odd0>=even1 && even0>=odd1){
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