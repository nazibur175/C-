#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int mx=0;
        for(int i=1;i<=n;i++) {
            mx=max(a[i],mx);
        }
        int in=0;
        for(int i=1;i<=n;i++){
            if(a[i]==mx) {
                in=i;
                break;
            }
        }

        int mn=n+1;
        int premn[n+2];
        for(int i=1;i<=n;i++){
            mn=min(mn,a[i]);
            premn[i]=mn;
        }

        int postmx[n+2];
        int mxx=0;
        for(int i=n;i>=1;i--){
            mxx=max(mxx,a[i]);
            postmx[i]=mxx;
        }
        if(in==n){
            cout<<"Yes"<<endl;
            for(int i=1;i<n;i++){
                cout<<a[i]<<" "<<n<<endl;
            }
        }
        else if(in==1){
            cout<<"No"<<endl;
        }
        else {
            int f=1;
            for(int i=1;i<n;i++){
                if(premn[i]<postmx[i+1]){
                    continue;
                }
                else {
                    f=0;
                    break;
                }
            }
            if(f){
                cout<<"Yes"<<endl;
                vector<pair<int,int>>v;
                for(int i=1;i<n;i++){
                    // v.push_back({premn[i],postmx[i+1]});
                    if(a[i]<postmx[i+1])
                        cout<<a[i]<<" "<<postmx[i+1]<<endl;
                    else {
                        cout<<premn[i-1]<<" "<<postmx[i+1]<<endl;
                    }
                }
                
            }
            else cout<<"No"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}