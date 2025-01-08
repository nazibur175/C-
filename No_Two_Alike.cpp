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
        map<int,int>start;
        map<int,int>end;
        for(int i=1;i<=n;i++){
            if(start[a[i]]==0){
                start[a[i]]=i;
                end[a[i]]=i;
            }
            else end[a[i]]=i;
        }
        int ans=0;
        int f=0;
        int R=0;
        set<int>s;
        for(int i=1;i<=n;i++){
            if(f==0 && start[a[i]]==end[a[i]]) continue;
            else if(f){
                if(i==R){
                    ans+=s.size();
                    //cout<<ans<<" "<<i<<endl;
                    s.clear();
                    f=0;
                }
                else {
                    R=max(R,end[a[i]]);
                    s.insert(a[i]);
                }
            }
            else{
                f=1;
                R=end[a[i]];
                s.insert(a[i]);
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