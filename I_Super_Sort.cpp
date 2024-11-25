#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int f=1;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>k){
                f=0;
                break;
            }
        }
        if(!f) cout<<"No Solution"<<endl;
        else{
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}