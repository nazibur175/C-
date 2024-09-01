#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=0;i<n+2;i++) cin>>a[i];

        sort(a,a+n+2);
        int sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        int f=0;
        if(sum==a[n]){
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
            f=1;
        }
        else {
            sum+=a[n];
            int in=0;
            for(int i=0;i<n+1;i++){
                if(sum-a[i]==a[n+1]){
                    in=i;
                    f=1;
                    break;
                }
            }
            if(f) {
                for(int i=0;i<n+1;i++){
                    if(i!=in) cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else cout<<"-1"<<endl;

        }



    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}