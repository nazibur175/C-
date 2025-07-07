#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        int gc=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            gc=__gcd(gc,v[i]);
        }
        vector<int>c;
        for(int i=0;i<n;i++){
            c.push_back(v[i]/gc);
        }
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(c[i+1]%c[i]!=0){
                int g=__gcd(c[i],c[i+1]);
                int temp=c[i]/g;
                ans=lcm(ans,temp);
            }
        }
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}