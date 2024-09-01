#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        map<int,int>a;
        map<int,int>b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            b[x]++;
        }
        int ac=0;
        int bc=0;
        int both=0;
        int f=1;
        for(int i=1;i<=k;i++){
            if(a[i] && b[i]){
                both++;
            }
            else if(a[i]) ac++;
            else if(b[i]) bc++;
            else {
                f=0;
                break;
            }
        }
        if(f==0) cout<<"NO"<<endl;
        else if(max(ac,bc)> (both+(min(ac,bc)))) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}