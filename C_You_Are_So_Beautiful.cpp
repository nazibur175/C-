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
        map<int,int>m;
        map<int,int>mm;
        int check[n+9]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(m[a[i]]>=1 && mm[a[i]]==0){
                c++;
            }
            mm[a[i]]++;
            if(m[a[i]]==mm[a[i]]){
                ans+=c;
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}