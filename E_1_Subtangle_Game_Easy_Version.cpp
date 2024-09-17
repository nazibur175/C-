#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l,n,m;
        cin>>l>>n>>m;
        int a[l];
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        int aa[n+1][m+1];
        map<int,set<pair<int,int>>>ma;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>aa[i][j];
                ma[aa[i][j]].insert({i,j});
            }
        }

        int pre_i=0;
        int pre_j=0;
        int turn=1;
        // 1 - T
        // 0 - N
        for(int i=0;i<l;i++){
            int val = a[i];
            int ok=0;
            if(ma[val].size()>=1){
                auto temp = prev(ma[val].end());
                ma[val].erase(temp);
                int ii =(*temp).first;
                int jj= (*temp).second;
                if(ii>=pre_i && jj>=pre_j){
                    pre_i=ii+1;
                    pre_j=jj+1;
                    turn=1-turn;
                    ok=1;
                }
            }
            if(!ok) break;
        }
        if(turn) cout<<"N"<<endl;
        else cout<<"T"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}