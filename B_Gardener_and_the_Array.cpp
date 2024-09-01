#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
void solve(){
    test{
        int n;
        cin>>n;
        int f=0;
        vector<int>v[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            //v[i].push_back(k);
            for(int j=0;j<k;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
                m[x]++;
            }
        }

        for(int i=0;i<n;i++){
            int temp=1;
            for(auto x:v[i]){
                if(m[x]<2) temp=0;
            }
            if(temp==1) f=1;
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}