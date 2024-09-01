#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int poww(int a,int b){
    int x=pow(a,b);
    return x;
}
int countDistinctK(int a, int b, int l) {
    set<int>distinctK;
    for (int x = 0; poww(a,x) <= l; x++) {
        for (int y = 0; poww(b, y) <= l; y++) {
            int temp = (poww(a, x) * poww(b, y));
            int k = l / temp;
            
            if (k >= 0 && k*temp == l)
                distinctK.insert(k);
        }
    }
    return distinctK.size();
}
void solve(){
    test{
        int a,b,l;
        cin>>a>>b>>l;
        int ans = countDistinctK(a,b,l);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}