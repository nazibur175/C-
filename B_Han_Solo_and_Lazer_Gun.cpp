#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    set<double>s;
    int m=0;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if(x-a==0) m=1;
        else 
        {
        double slope=(double)(y-b)/(x-a);
        s.insert(slope);
        }

    }
    cout<<s.size()+m<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}