#include<bits/stdc++.h>
using namespace std;
#define int long long 
// #define   mod             1000000007
#define test int t; cin>>t; while(t--)
// const int N = 1e5 + 9;
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        map<int,queue<int>>mp;
        set<int>s;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
            mp[a[i]].push(i);
        }
        int ans=0;
        for(int i=0;i<m;i++){
            mp[a[i]].pop();
            if(s.find(a[i])!=s.end()){
                continue; 
            }
            else{
                if(s.size()<n){
                    ans++;
                    s.insert(a[i]);
                }
                else{
                    // ekta id delete korte hobe jeita sobar pore occur korbe or korbei na
                    int mx=-1;
                    int id;
                    for(auto x:s){
                        if(mp[x].size()==0){
                            id=x;
                            break;
                        }
                        int temp = mp[x].front();
                        if(temp>mx){
                            mx=temp;
                            id=x;
                        }
                    }
                    s.erase(id);
                    s.insert(a[i]);
                    ans++;
                }
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