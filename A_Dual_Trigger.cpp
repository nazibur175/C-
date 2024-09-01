#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
                if(s[i]=='1') 
                    cnt++;
            }
        int f=(cnt%2==0);
        if(cnt%2){
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1] && s[i]=='1'){
                    f=0;
                    break;
                }
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