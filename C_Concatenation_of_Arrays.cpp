#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// bool cmp(pair<int, int>&x , pair<int,int>&y){
//     if(x.first==y.first){
//         return x.second>y.second;
//     }
//     return x.first<y.first;
// }
bool cmp(tuple<int,int,int>&x , tuple<int,int,int>&y){
    if(get<0>(x)==get<0>(y)){
        if(get<1>(x)==get<1>(y)){
            return get<2>(x)<get<2>(y);
        }
        return get<1>(x)<get<1>(y);
    }
    return get<0>(x)<get<0>(y);
}
void solve(){
    test{
        int n;
        cin>>n;
        vector<tuple<int,int,int>> a(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a[i] = {x+y,x,y};
        }
        sort(a.begin(),a.end(),cmp);
        int cnt=1;
        for(auto x:a){
            cout<<get<1>(x)<<" "<<get<2>(x);
            if(cnt!=a.size()) cout<<" ";
            cnt++;
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