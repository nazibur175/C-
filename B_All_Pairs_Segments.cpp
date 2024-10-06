#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        map<int,int>m;
        for(int i=1;i<=n;i++){
            //int point = v[i];
            // pore + (pore+1)*(ager)
            int segment= n-i + (n-i+1) * (i-1);
            m[segment]++;

            int point = 0;
            if(i!=1){
                point = v[i]-v[i-1]-1;
                segment = segment - (n-i);
                if(point) m[segment]+=point;
            }

        }
        while (q--)
        {
            int x;
            cin>>x;
            if(m[x]==0){
                cout<<0<<" ";
            }
            else cout<<m[x]<<" ";
        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}