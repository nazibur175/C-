#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int queryAND(int i,int j){
    cout<<"AND "<<i<<" "<<j<<endl;
    cout<<flush;
    int x;
    cin>>x;
    return x;
}
int queryXor(int i,int j){
    cout<<"XOR "<<i<<" "<<j<<endl;
    cout<<flush;
    int x;
    cin>>x;
    return x;
}
void solve(){
    int n;
    cin>>n;
    int aandb=queryAND(1,2);
    int bandc=queryAND(2,3);
    int aandc=queryAND(1,3);

    int axorb= queryXor(1,2);
    int axorc= queryXor(1,3);
    int bxorc= axorb^axorc;

    int apb= axorb + 2*(aandb);
    int bpc= bxorc + 2*(bandc);
    int apc= axorc + 2*(aandc);
    // a+b+b+c-a-c = 2b
    int b= (apb+bpc-apc)/2;
    int a= apb-b;
    int c= bpc-b;
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    for(int i=4;i<=n;i++){
        int temp = queryXor(i-1,i);
        ans.push_back(temp^ans.back());
    }
    cout<<"!";
    for(auto x:ans) cout<<" "<<x;
    cout<<endl;
    cout<<flush;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}