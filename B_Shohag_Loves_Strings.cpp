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
        if(n==1){
            cout<<"-1"<<endl;
            continue;
        }
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                cout<<s[i]<<s[i+1]<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            for(int i=0;i<n-2;i++){
                if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0){
            cout<<"-1"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}