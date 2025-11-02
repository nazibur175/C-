#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int temp=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x%3]++;
        temp^=x%3;
    }
    if((temp==0 && m[0]) || (temp==0 && k%2==0)){
        cout<<"Giovana"<<endl;
    }
    else if(temp!=0 && (m[1]%2==1 && m[2]%2==1) && (m[0]|| k%2==1)){
        cout<<"Giovana"<<endl;
    }
    else cout<<"Julia"<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}