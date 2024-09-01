#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ca=0;
        int cb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A')
                ca++;
            else cb++;
        }
        if(cb==k) cout<<"0"<<endl;
        else if(cb>k){
            int x=cb-k;
            int c=0;
            for(int i=0;i<n;i++){
                if(s[i]=='B') c++;
                if(c==x){
                    cout<<1<<endl;
                    cout<<i+1<<" A"<<endl;
                    break;
                }
            }
        }
        else {
            int x=k-cb;
            int c=0;
            for(int i=0;i<n;i++){
                if(s[i]=='A') c++;
                if(c==x ){
                    cout<<1<<endl;
                    cout<<i+1<<" B"<<endl;
                    break;
                }
            }
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}