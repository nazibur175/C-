#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void ans(int a,int b){
    int gcd=__gcd(a,b);
    cout<<a/gcd<<"/"<<b/gcd<<endl;
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int pos=0;
        int neg=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<0){
                neg++;
            }
            else{
                pos++;
            }
            sum+=abs(x-0ll);
        }
        cout<<"Case "<<tt<<": ";
        if(neg==n){
            cout<<"inf"<<endl;
        }
        else{
            ans(sum,pos);
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}