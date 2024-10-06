#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
const int N=1000+9;
int a[N];
int b[N];
int ok(int mid){
    int f=1;
    int kk=k;
    for(int i=0;i<n;i++){
        if((a[i]*mid) <= b[i]){
            continue;
        } 
        else{
            int lagbe=(a[i]*mid)-b[i];
            if(kk>=lagbe){
                kk=kk-lagbe;
            }
            else {
                f=0;
                break;
            }
        }
    }
    return f;
}
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int l=0;
    int r=2000+1;
    while (r-l>1)
    {
        int mid = (l+r)/2;
        if(ok(mid)==1){
            l=mid;
        }
        else {
            r=mid;
        }
    }
    cout<<l<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}