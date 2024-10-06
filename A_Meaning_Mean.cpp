#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        while (v.size()>1)
        {
            sort(v.begin(),v.end());
            int x=v[0];
            int y=v[1];
            vector<int>temp;
            for(int i=2;i<v.size();i++){
                temp.push_back(v[i]);
            }
            int t=(x+y)/2;
            temp.push_back(t);
            v=temp;
        }
        
        cout<<v[0]<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}