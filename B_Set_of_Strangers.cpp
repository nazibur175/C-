#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        set<int> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                s.insert(a[i][j]);
            }
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+1<n && a[i][j]==a[i+1][j]){
                    mp[a[i][j]]++;
                }
                if(j+1<m && a[i][j]==a[i][j+1]){
                    mp[a[i][j]]++;
                }
                if(i-1>=0 && a[i][j]==a[i-1][j]){
                    mp[a[i][j]]++;
                }
                if(j-1>=0 && a[i][j]==a[i][j-1]){
                    mp[a[i][j]]++;
                }
            }
        }
        int ans=s.size();
        int duita=0;
        for(auto i:mp){
            if(i.second>1){
                duita++;
            }
        }
        int ekta = s.size()-duita;
        if(duita){
            duita--;
        }
        else ekta--;
        cout<<duita*2+ekta<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}