#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n%2==0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            int s=(2*n+1)-n/2;
            int a=(n+1)/2;
            for(int i=0;i<n;i++){
                cout<<a<<" "<<s-a<<endl;
                s++;
                a--;
                if(a==0) a=n;
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