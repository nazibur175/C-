#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct st
{
    int n1,n2;
    string s1;
    int n3;
    string s2;
};
bool cmp(st &x, st &y){
    if(x.n1==y.n1){
        if(x.n2==y.n2){
            if(x.s1==y.s1){
                if(x.n3==y.n3){
                    return x.s2<y.s2;
                }
                return x.n3<y.n3;
            }
            return x.s1<y.s1;
        }
        return x.n2<y.n2;
    }
    return x.n1<y.n1;
}
void solve(){
    int n;
    cin>>n;
    vector<st>v;
    for(int i=0;i<n;i++){
        int n1,n2,n3;
        string s1,s2;
        cin>>n1>>n2>>s1>>n3>>s2;
        v.push_back({n1,n2,s1,n3,s2});
    }

    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<<x.n1<<" "<<x.n2<<" "<<x.s1<<" "<<x.n3<<" "<<x.s2<<endl;
    }


  

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}