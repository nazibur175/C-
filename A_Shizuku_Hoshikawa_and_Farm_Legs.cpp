#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int c=0;
        for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                if(i*2 + j* 4 == n){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}