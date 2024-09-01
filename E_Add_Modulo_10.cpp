#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int check(int n){
    while (1)
    {
        if(n%5==0 || n%5==5) return n+n%10;
        else if(n%10==2) return n%20;
        n+=n%10;
    }
    
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[check(a[i])]++;
        }
        if(m.size()==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}