#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=0;
        int occur=0;
        for(auto x:m){
            int temp=x.second;
            //nc2
            ans+=occur*(temp*(temp-1))/2;
            //nc3
            ans+= (temp*(temp-1)*(temp-2))/(3*2);
            occur+=temp;
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