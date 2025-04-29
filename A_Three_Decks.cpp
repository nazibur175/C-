#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int x=sum/3;
        if(sum%3 || a>x || b>x ){
            cout<<"NO"<<endl;
        }
        else{
            int lagbe= x-a + x-b + x;
            if(lagbe==c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
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