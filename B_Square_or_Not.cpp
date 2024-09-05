#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool is_square(int n){
    int temp = sqrt(n);
    return temp*temp==n;
}
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=sqrt(n);
        string ss="";
        for(int i=1;i<=x;i++){
            for(int j=1;j<=x;j++){
                if(j==1||j==x || i==1 || i==x){
                    ss.push_back('1');
                }
                else 
                ss.push_back('0');
            }
        }
        if(s==ss) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}