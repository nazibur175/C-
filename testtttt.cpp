#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        int n;
        cin>>n;
        vector<int>v(n+1,1);
        v[n]=n;
        int k=n-1;

        for(int i=0;i<(n/2);i++){
            v[i+1]=k;
            k--;
        }
        int x=n-1,f=2;
        for(int i=0;i<(n/2)-1;i++){
            v[x]=f;
            x--;
            f++;
        }


        if((n&1)==0)
        v[n/2]=1;
        for(int i=1;i<=n;i++)
        cout<<v[i]<<' ';

        cout<<'\n';
        

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}