#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        int temp=0;
        for(int len=1;len<=min(n,m);len++){
            for(int i=0;i+len-1<n;i++){
                for(int j=0;j+len-1<m;j++){
                    if(a.substr(i,len)==b.substr(j,len)){
                        temp=max(temp,len);
                    }
                }
            }
        }
        cout<<n+m-2*temp<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}