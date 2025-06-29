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
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<=1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"0"<<endl;
            continue;
        }
        f=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                f=1;
                break;
            }
            else if(a[i]<a[i-1] && a[i]<a[i+1]){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"1"<<endl;
            continue;
        }
        else cout<<-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}