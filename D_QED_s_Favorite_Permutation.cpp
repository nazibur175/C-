#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int bad[n+1]={0};
        int mx=0;
        for(int i=1;i<=n;i++){
            mx=max(mx,a[i]);
            if(i!=mx){
                bad[i]=1;
            }
        }

        string s;
        cin>>s;
        s='0'+s;
        int k=0;
        for(int i=1;i<n;i++){
            if(s[i]=='L' && s[i+1]=='R' && bad[i]==1){
                k++;
            }
        }
        while(m--){
            int x;
            cin>>x;
            if((x-1)>1 && bad[x-1] && s[x-1]=='L' && s[x]=='R'){
                k--;
            }
            if((x+1)<=n && bad[x] && s[x]=='L' && s[x+1]=='R'){
                k--;
            }
            s[x]=(s[x]=='L'?'R':'L');
            if((x-1)>1 && bad[x-1] && s[x-1]=='L' && s[x]=='R'){
                k++;
            }
            if((x+1)<=n && bad[x] && s[x]=='L' && s[x+1]=='R'){
                k++;
            }
            cout<<(k==0?"YES":"NO")<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}