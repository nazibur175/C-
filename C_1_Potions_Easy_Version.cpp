#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int sum=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        pq.push(x);
        while (sum<0)
        {
            sum-=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size()<<endl;
    


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}