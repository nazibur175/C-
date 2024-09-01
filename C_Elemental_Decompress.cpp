#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<vector<int>>v(n+9);
        int a[n+9];
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a[i]=x;
            v[x].push_back(i);
        }
        int f=1;
        for(int i=1;i<=n;i++){
            if(v[i].size()>2) {
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
            continue;
        }
        
        vector<int>p(n+9),q(n+9);
        queue<pair<int,int>>que;
        for(int i=n;i>=1;i--){
            if(v[i].size()==1){
                p[v[i][0]]=i;
                q[v[i][0]]=i;
            }
            else if(v[i].size()==2){
                p[v[i][0]]=i;
                q[v[i][1]]=i;
                que.push({v[i][1],v[i][0]});
            }
            else {
               if(que.empty()){
                f=0;
                break;
                }
                auto [a, b] = que.front();
                que.pop();
                p[a] = i, q[b] = i;
            }
            //cout<<"Enterred"<<endl;
        }
        if(f==0) {
            cout << "NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++) cout<<p[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++) cout<<q[i]<<" ";
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}