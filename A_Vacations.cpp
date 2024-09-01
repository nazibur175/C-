#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            ans++;
            x=0;
        }
        else if(x==2 && a[i]==1){
            x=1;
        }
        else if(x==1 && a[i]==2){
            x=2;
        }
        else {
            if(a[i]-x<=0){
                ans++;
                x=0;
            }
            else {
                
                if(x==0 && a[i]==3 && i+1<n && a[i+1]==1){
                    x=2;
                }
                else if(x==0 && a[i]==3 && i+1<n && a[i+1]==2){
                    x=1;
                }
                else if(x==0 && a[i]==3 && i+1<n && a[i+1]==3)
                    continue;
                else x=a[i]-x;
            }
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}