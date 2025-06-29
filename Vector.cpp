#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int q;
    cin>>q;
    vector<int>v;
    while(q--){
        int val1, val2;   // 0 x  push
                          // 1 y  print
                          // 2    pop
        cin>>val1;
        if(val1==0){
            cin>>val2;
            v.push_back(val2);
        }
        else if(val1==1){
            cin>>val2;
            cout<<v[val2]<<endl;
        }
        else {
            v.pop_back();
        }
    }

    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}