#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int sum=0;
        int last=-1;
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            sum+=a[i];
            if(sum%3==0){
                last=i;
            }
            if(mp[sum%3]==0){
                mp[sum%3]=i;
            }
        }
        if(last==-1) {
            cout<<"Yes"<<endl;
            continue;
        }
        else if(sum%3==0) {
            cout<<"No"<<endl;
        }
        else {
            int f=0;
            for(int i=1;i<=2;i++){
                if(mp[i] && mp[i]>last){
                    f=1;
                    break;
                }
            }
            if(f) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}