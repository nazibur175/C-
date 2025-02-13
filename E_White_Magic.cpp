#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>m;
        int cntzero=0;
        int firstzeroin=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==0){
                cntzero++;
                if(firstzeroin==-1){
                    firstzeroin=i;
                }
            }
            //m[a[i]]++;
        }
        int mn=1e17;
        int premn[n+2];
        int premex[n+2];
        premn[0]=mn;
        for(int i=1;i<=n;i++){
            premn[i]=min(premn[i-1],a[i]);
        }
        int val=0;
        premex[n+1]=0;
        for(int i=n;i>=1;i--){
            if(a[i]==0 && i!=firstzeroin){
                premex[i]=premex[i+1];
                continue;
            }
            m[a[i]]++;
            while (m[val]!=0)
            {
                val++;
            }
            premex[i]=val;
        }
       
        if(cntzero==0) cout<<n<<endl;
        else {
            int f=1;
            for(int i=1;i<=n-1;i++){
                if(a[i]==0) continue;
                else if(premn[i]<premex[i+1]){
                    f=0;
                    break;
                }
            }
            if(f) cout<<n-cntzero+1<<endl;
            else cout<<n-cntzero<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}