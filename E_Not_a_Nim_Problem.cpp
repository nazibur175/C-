#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int xo=0;
        for(int i=0;i<n;i++) {
            xo=xo ^ a[i];
        }
    
        if(xo==0) cout<<"Bob"<<endl;
        else{
            int ans=0;
            for(int i=0;i<n;i++){
                int temp = a[i]^xo;
                if(temp<a[i] && gcd((a[i]-temp),a[i])==1){
                    a[i]=temp;
                    ans=1;
                    break;
                }
            }
            if(ans) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
       
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}