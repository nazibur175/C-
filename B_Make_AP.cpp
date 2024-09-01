#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        int diff_ab=b-a;
        int diff_bc=c-b;
        int diff_ac=c-a;

        //target c
        if((b+diff_ab)%c==0 && (b+diff_ab)>=c && (b+diff_ab)!=0 )
            cout<<"YES"<<endl;
        //terget a
        else if((b-diff_bc)%a==0 && (b-diff_bc)>=a && (b-diff_bc)!=0)
            cout<<"YES"<<endl;
        //target b
        else if(diff_ac%2==0 && (a+diff_ac/2)>=b && (a+diff_ac/2)%b==0 && ((a+diff_ac/2)!=0))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}