#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int area = l1*b1+l2*b2+l3*b3;
        int S = sqrt(area);
        bool ok=false;
        if (S*S==area) {
            if (l1==S&&l2==S&&l3==S && b1+b2+b3==S){
                ok = true;
            }
            if (b1==S&&b2==S && b3==S && l1+l2+l3 == S) {
                ok = true;
            }
            if (!ok && l1 == S) {
                int ex = S - b1;
                if (b2==ex && b3==ex && l2+l3==S) {
                    ok = true;
                }
            }
            if (!ok && b1 == S) {
                int ex=S-l1;
                if (l2==ex && l3==ex && b2+b3==S) {
                    ok = true;
                }
            }
    }
    if(ok) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}