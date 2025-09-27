#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int aa=min(a,b);
        int bb=max(a,b);
        if(bb%aa!=0){
            cout<<"-1\n";
            continue;
        }
        int temp=bb/aa;
        int ans=0;
        while(temp%8==0){
            temp/=8;
            ans++;
        }
        while(temp%4==0){
            temp/=4;
            ans++;
        }
        while(temp%2==0){
            temp/=2;
            ans++;
        }
        if(temp!=1){
            cout<<"-1\n";
            continue;
        }
        cout<<ans<<'\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}