#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>ans;
        int lagbe=n;
        int y=0;
        int x=0;
        for(int i=1;;i++){
            int k=1;
            while((k*(k+1))/2<=lagbe){
                k++;
            }
            //cout<<lagbe<<" "<<k<<endl;
            lagbe-=(k*(k-1))/2;
            x=i*5001;
            y=y+i*500001;
            for(int j=1;j<=k;j++){
                ans.push_back({x+j,y});
            }
            if(lagbe==0) break;

        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}