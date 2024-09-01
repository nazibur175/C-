#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        int a=n-x;
        set<int>ans;
        for(int i=1;i*i<=a;i++){
            if(a%i==0){
                if(i%2==0){
                    int k= (i+2)/2;
                    if(k>=x) ans.insert(k);
                }
                int j= a/i;
                j+=2;
                if(j%2==0){
                    int k=j/2;
                    if(k>=x) ans.insert(k);
                }
            }
        }
        int b = n+x-2;
        for(int i=1;i*i<=b;i++){
            if(b%i==0){
                if(i%2==0){
                    int k= (i+2)/2;
                    if(k>=x) ans.insert(k);
                }
                int j= b/i;
                j+=2;
                if(j%2==0){
                    int k=j/2;
                    if(k>=x) ans.insert(k);
                }
            }
        }
        cout<<ans.size()<<endl;


    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}