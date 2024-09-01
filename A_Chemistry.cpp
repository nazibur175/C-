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
        int a[30]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        int x=n-k;
        if(x==1) cout<<"YES"<<endl;
        else {
            int ce=0;
            int co=0;
            for(int i=0;i<30;i++){
                ce+=(a[i]/2)*2;
                co+=a[i]%2;
            }
            if(x%2==0){
                if(ce>=x) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else {
                if(ce>=x) cout<<"YES"<<endl;
                else if(ce+1>=x && co) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
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