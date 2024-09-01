#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int evensum=0;
        int oddsum=0;
        map<int,int>m;
        int f=0;
        for(int i=1;i<=n;i++){
            if(i%2==1) oddsum+=a[i];
            else evensum+=a[i];
            int diff=oddsum-evensum;
            if(diff==0) {
                f=1;
                break;
            }
            else if(m[diff]) {
                f=1;
                break;
            }
            else m[diff]++;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}