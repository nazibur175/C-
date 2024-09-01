#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int max_fre=(n/k)+1;
        int cnt=0;
        int f=1;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x==max_fre) cnt++;
            if(x>max_fre){
                f=0;
            }
        }
        if(m<k || cnt>n%k) f=0;
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