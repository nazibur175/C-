#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int>v1,v2;
    int s1=0,s2=0;
    if((n*(n+1)/2)%2!=0)
        cout<<"NO"<<endl;
    else{
        for(int i=n;i>=1;i--){
        if(s1<=s2){
            v1.push_back(i);
            s1+=i;
        }
        else {
            v2.push_back(i);
            s2+=i;
        }
        }
    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto x:v2){
        cout<<x<<" ";
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