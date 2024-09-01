#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void p(int n){
    if(n<10) cout<<"0"<<n;
    else cout<<n;
}
void solve(){
    test{
        int h,m;
        char ch;
        cin>>h>>ch>>m;
        int total_min = h*60 + m;
        int temp = total_min%(12*60);
        if(temp<60){
            cout<<"12:";
            p(temp);
        }
        else{
            p(temp/60); cout<<":"; p(temp%60);
        } 
        
        if(total_min< 12*60){
            cout<<" AM"<<endl;
        }
        else cout<<" PM"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}