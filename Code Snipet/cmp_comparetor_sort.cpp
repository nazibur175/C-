#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

// First value in ascending Order
// second value in descending Order

// Method 1
bool cmp(pair<int, int>&x , pair<int,int>&y){
    if(x.first==y.first){
        return x.second>y.second;
    }
    return x.first<y.first;
}

void solve(){
    vector<pair<int,int>>v;
    v.push_back({2,2});
    v.push_back({2,3});
    v.push_back({1,2});
    v.push_back({2,4});
    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<< x.first<<" "<<x.second<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

// Method-2
// struct st{
//     int first,second;
// };
//bool cmp(st &x, st &y) {...}
// If we this, we have to declare 
// vector<st>v