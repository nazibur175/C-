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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=0;i<=n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(a[j]>i) 
                    cnt++;
            }
            if(cnt==i){
                cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(!f) cout<<-1<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}