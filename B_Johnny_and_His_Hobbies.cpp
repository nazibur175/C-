#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
int a[1030];
int is_possible(int k){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int f=1;
    for(int i=0;i<n;i++){
        if(m[a[i]^k]){
            continue;
        }
        else {
            f=0;
            break;
        }
    }
    return f;
}
void solve(){
    test{
        
        cin>>n;

        for(int i=0;i<n;i++)cin>>a[i];
        int f=0;
        int ans=0;
        for(int k=1;k<=1024;k++){
            if(is_possible(k)){
                f=1;
                ans=k;
                break;
            }
        }
        if(f) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}