#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
             cin>>a[i];
             a[i]%=x;
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
             cin>>b[i];
             b[i]%=x;
             mp[b[i]]++;
        }
        int temp=1;
        for(int i=0;i<n;i++){
            int op=abs(a[i]-x);
            if(mp[a[i]]>0){
                mp[a[i]]--;
            }
            else if(mp[op]>0){
                mp[op]--;
            }
            else {
                temp=0;
                break;
            }
        }
        if(temp==1) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}