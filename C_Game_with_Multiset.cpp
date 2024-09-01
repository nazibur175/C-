#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    map<int,int>m;
    test{
        int x,y;
        cin>>x>>y;
        if(x==1){
            m[y]++;
        }
        else {
            int val=y;
            int f=0;
            for(int i=30;i>=0;i--){
                int temp=1LL<<i;
                if(m[i]){
                    if(val>=temp*m[i]) val-=temp*m[i];
                    else {
                        val=val%temp;
                    }
                }
                if(val==0) {
                    f=1;
                    break;
                }
            }
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}