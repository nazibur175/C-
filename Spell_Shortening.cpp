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
        int f=0;
        int anss=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]>s[i+1]){
                f=1;
                anss=i;
                break;
            }
        }
        if(f)
        for(int i=0;i<n;i++){
            if(anss!=i)
            ans+=s[i];
        }
        else{
            s.pop_back();
            ans=s;
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}