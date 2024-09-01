#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int need(int n,int x) {
    return (x-(n%x))%x;
}
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v;
        map<int,map<int,int>>m;
        for (int i=0;i<n;i++) {
            int val;
            cin>>val;
            v.push_back(val);
            m[val%x][val%y]++;

        }
        int cnt=0;
        for(auto i:v) {
            int temp=need(i,x);
            cnt+=m[temp][i%y];
            if(i%x==temp)  
                cnt--;
        }
        cout<<cnt/2<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}