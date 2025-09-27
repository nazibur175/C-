#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int check(int n){
    int f=1;
    int temp=n;
    while(temp){
        int dig=temp%10;
        if(dig!=0 && n%dig!=0){
            f=0;
            break; 
        }
        temp/=10; 
    } 
    return f;
}
void solve(){
    test{
        int n;
        cin>>n;
        for(int i=n;;i++){
            if(check(i)){
                cout<<i<<"\n";
                break;
            }
        }
    }
     //cout<<check(8040)<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}