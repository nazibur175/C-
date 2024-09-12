#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int query(int n){
    cout<<n<<endl;
    cout<<flush;
    string s;
    cin>>s;
    if(s=="yes"){
        return 1;
    }
    else return 0;
}
void solve(){
    int x=0;
    vector<int>v{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(query(v[i])){
            cnt++;
        }
    }
    if(cnt>=2) cout<<"composite"<<endl;
    else cout<<"prime"<<endl;
    cout<<flush;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}