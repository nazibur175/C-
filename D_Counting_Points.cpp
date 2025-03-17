#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int sqrtll(int x){
    int temp=sqrtl(x)+2;
    while(temp*temp>x){
        temp--;
    }
    return temp;
}
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n];
        int r[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        map<int,int>cnt;

        for(int i=0;i<n;i++){
            int x=a[i];
            int y=r[i];
            for(int xx=x-y;xx<=x+y;xx++){
                cnt[xx]=max(cnt[xx],(2*sqrtll(y*y-((x-xx)*(x-xx)))+1));
            }
        }
        int ans=0;
        for(auto i:cnt){
            ans+=i.second;
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