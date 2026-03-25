#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
int factorize(int n) {
    if(n==1) return 1;
    set<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.insert(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.insert(n);
    }
    if(res.size()>1) return -1;
    for(auto x:res) return x;
}
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int>vv=v;
        sort(vv.begin(),vv.end());
        if(vv==v){
            cout<<"Bob"<<endl;
            continue;
        }
        int f=0;
        for(int i=0;i<n;i++){
            int temp = factorize(v[i]);
            if(temp==-1){
                cout<<"Alice"<<endl;
                // cout<<v[i]<<endl;
                f=1;
                break;
            }
            else v[i]=temp;
        }
        if(f) continue;
        vv=v;
        sort(vv.begin(),vv.end());
        if(vv==v){
            cout<<"Bob"<<endl;
        }
        else cout<<"Alice"<<endl;
        
    }
    // cout<<factorize(8192)<<endl;
    // cout<<factorize(677)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}