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
        int c=0;
        int cmax=0;
        int target=INT64_MAX;
        for(char i='a'; i<='z';i++){
            for(int j=0;j<n;j++){
                if(s[j]!=i) {
                    c++;
                    cmax=max(c,cmax);
                }
                else {
                    c=0;
                }
            }
            
        target=min(target,cmax);
        cmax=0;
        c=0;
        }
    //cout<<target<<endl;
    int ans=0;
    while (target)
    {
        ans++;
        target/=2;
    }
    cout<<ans<<endl;
    //cout<<"--------"<<endl;
    
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}