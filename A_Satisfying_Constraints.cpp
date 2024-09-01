#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a1=INT64_MIN;
        int a2=INT64_MAX;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x==1) a1=max(a1,y);
            else if(x==2) a2=min(a2,y);
            else if(x==3) v.push_back(y);
        }
        int temp=a2-a1+1;
        for(auto x:v){
            if(x>=a1 && x<=a2) temp--;
        }
        cout<<max(temp,0LL)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}