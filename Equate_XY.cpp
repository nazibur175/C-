#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>dv;
void divisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            dv.push_back(i);
            if(i!=n/i)
            dv.push_back(n/i);
        }
    }
}
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
void solve(){
    test{
        dv.clear();
        int x,y,z,c;
        cin>>x>>y>>z>>c;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        int ans=2*c;
        if(x>y && x%y==0){
            divisor(x);
            for(auto i:dv){
                if(__gcd(x,i)==lcm(y,i)){
                    ans=min(ans,abs(z-i)+c);
                }
            }
        }
        else if(y>x && y%x==0){
            divisor(y);
            for(auto i:dv){
                if(__gcd(y,i)==lcm(x,i)){
                    ans=min(ans,abs(z-i)+c);
                }
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