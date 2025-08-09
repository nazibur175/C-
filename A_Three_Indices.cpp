#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int premn[n+1],suffmn[n+1];
        int curmn=0;
        for(int i=0;i<n;i++){
            if(a[i]<a[curmn]){
                curmn=i;
            }
            premn[i] = curmn;
        }
        curmn=n-1;
        for(int i=n-1;i>=0;i--){
            if(a[i]<a[curmn]){
                curmn=i;
            }
            suffmn[i] = curmn;
        }
        int f=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[premn[i-1]] && a[i]>a[suffmn[i+1]]){
                cout<<"YES"<<"\n";
                cout<<premn[i-1]+1<<" "<<i+1<<" "<<suffmn[i+1]+1<<"\n";
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"NO"<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}