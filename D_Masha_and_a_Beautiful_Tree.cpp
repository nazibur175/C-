#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int c=0;
        int f=1;
        for(int i=1;i<n;i*=2){
            for(int j=0,k=j+i;j<n;j+=i*2,k+=i*2){
                if(a[j]>a[k]){
                    c++;
                    swap(a[j],a[k]);
                }
                if(a[k]-a[j]!=i){
                    f=0;
                    break;
                }
                if(!f) break;
                //cout<<j<<" "<<k<<endl;
            }
        }
        if(!f) cout<<-1<<endl;
        else cout<<c<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}