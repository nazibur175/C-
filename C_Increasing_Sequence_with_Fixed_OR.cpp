#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(__builtin_popcountll(n)==1){
            cout<<1<<endl;
            cout<<1<<endl;
            continue;
        }
        int ans=__builtin_popcountll(n)+1;
        cout<<ans<<endl;

        for(int i=0;i<ans;i++){
            int cnt=0;
            int f=0;
            int val=0;
            for(int ii=62;ii>=0;ii--){
                if(n&(1ll<<ii)){
                    cnt++;
                    if(cnt<=i){
                        val+=(1ll<<ii);
                    }
                    else{
                        if(f)
                            val+=(1ll<<ii);
                        f=1-f;
                    }
                }
            }
            cout<<val<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}