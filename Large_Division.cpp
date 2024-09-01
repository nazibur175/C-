#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
   int t;
   cin>>t;
   for(int tc=1;tc<=t;tc++){
     string a;
     int b;
     cin>>a>>b;
     // 12434
     // - 1 234
     int i=0;
     if(a[0]=='-'){
        i++;
     }
    int n=a.size();
    int temp=0;
    for(;i<n;i++){
        temp*=10;
        temp= ((temp%b)+ (a[i]-'0'))%b;
    }
    cout<<"Case "<<tc<<": ";
    if(temp!=0) cout<<"not divisible"<<endl;
    else cout<<"divisible"<<endl;

    
   }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}