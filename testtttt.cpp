#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>subset;
void search(int k){
    if(k==3+1){
        for(int i=0;i<subset.size();i++){
            cout<<subset[i]<<" ";
        }
        cout<<endl;
    }
    else{
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
}
void solve(){
    search(1);

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}