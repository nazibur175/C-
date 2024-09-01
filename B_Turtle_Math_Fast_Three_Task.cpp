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
        int sum=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            m[(a[i]%3)]++;
        }
        if(sum%3==0) cout<<0<<endl;
        else if(sum%3==2) cout<<1<<endl;
        else if(sum%3==1){
            if(m[1]) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}