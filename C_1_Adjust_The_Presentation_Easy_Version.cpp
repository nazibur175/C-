#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int>ma;
        vector<int>b;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(ma[x]==0){
                b.push_back(x);
            }
            ma[x]=1;
        }
        int ans=1;
        for(int i=0;i<b.size();i++){
            if(a[i]==b[i]){
                continue;
            }
            else {
                ans=0;
                break;
            }
        }
        if(ans) cout<<"YA"<<endl;
        else cout<<"TIDAK"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}