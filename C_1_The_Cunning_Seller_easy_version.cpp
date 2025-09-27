#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int ans=0;
        int temp=n;
        int pw=1; 
        int k=0;
        while (temp>0) {
            int dig=temp%3; 
            if (dig) {
                int cost;
                cost =3*pw+ k*(pw/3);
                ans +=dig*cost;
            }
            temp/=3;
            k++;
            pw*= 3;
        }
        cout<<ans<<'\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}