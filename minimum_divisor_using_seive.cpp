#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6 + 9;
int spf[N];
void minimum_divisor(){
    for(int i=2;i<N;i++){
        spf[i]=i;
    }
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
            spf[j]= min(spf[j],i);
        }
    }
}

void solve(){
    minimum_divisor();
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<spf[x]<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}