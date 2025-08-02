#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000037
#define mod1 117
#define mod2 1000000007
#define test int t; cin>>t; while(t--)

int bigmod(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//     int my_rand(int l, int r)
//     {
//     	return uniform_int_distribution<int>(l, r) (rng);
//     }



void solve(){
    int n,q;
    cin>>n>>q;
    int a[n];
    int pre[n+1];
    int pre_sum=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(m[x]==0)
            m[x] = bigmod((x+117),mod2);
        pre_sum+=m[x];
        pre[i+1]=pre_sum;
    }
    // while (q--)
    // {
    //     int l,r,ll,rr;
    //     cin>>l>>r>>ll>>rr;
    //     if((pre[r]-pre[l-1]) == (pre[rr]-pre[ll-1])){
    //         cout<<"Same"<<endl;
    //     }
    //     else cout<<"Different"<<endl;
    // }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}