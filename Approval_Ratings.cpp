#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n=5;
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        sort(v.begin(),v.end());
        int coin=0;
        for(int i=0;i<n;i++){
            if(sum>=35){
                cout<<coin<<endl;
                break;
            }
            coin+=100;
            sum-=v[i];
            sum+=10;
        }
        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}