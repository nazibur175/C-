#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        deque<tuple<int,int,int>>a(n);
        for(int i=0;i<n;i++){
            int x,y,z;
            cin>>x>>y>>z;
            a[i] = {x,y,z};
        }
        sort(a.begin(), a.end(), [](const tuple<int,int,int>& lhs, const tuple<int,int,int>& rhs) {
            return get<0>(lhs) < get<0>(rhs);
        });

        int cur=k;
        while(!a.empty()){
            auto [x,y,z]= a.front();
            if(cur<x || cur>y || cur>=z){
                a.pop_front();
                continue;
            }
            else {
                cur=z;
                a.pop_front();
            }
        }
        cout<<cur<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}