#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void primeFactorization(int n, vector<int>& factors) {
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
}
int PositionRightmostSetbit(int n)
{
    if (n == 0)
        return 0;
    int position = 1;
    int m = 1;
 
    while (!(n & m)) {
 
        m = m << 1;
        position++;
    }
    return position;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int even=0;
        int odd=0;
        set<int>ss;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) even=1;
            else odd=1;
            //ss.insert(a[i]);
        }
        if(even==1 && odd==1){
            cout<<2<<endl;
            //cout<<t<<" "<<2<<endl;
        }
        // else if(ss.size()==2){
        //     for(auto ans:ss){
        //      //cout<<t<<" "<<ans<<endl;
        //      cout<<ans<<endl;
        //      break;
        //     }
        // }
        else{
            for(int i=1;i<63;i++){
                int rem=(1LL)<<i;
                set<int>ss;
                for(int i=0;i<n;i++){
                    ss.insert(a[i]%rem);
                }
                if(ss.size()==2){
                    cout<<rem<<endl;
                    break;
                }
            }
            
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}